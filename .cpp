#define SDL_MAIN_HANDLED
#include <SDL.h>
#include <iostream>
#include <vector>

const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;

// Basic structure to define an NPC
struct NPC {
    int x, y;
    SDL_Rect rect;
    std::string name;

    NPC(int x, int y, const std::string& name) : x(x), y(y), name(name) {
        rect = {x, y, 50, 50};  // NPC size is 50x50
    }

    void render(SDL_Renderer* renderer) {
        SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);  // Green NPC
        SDL_RenderFillRect(renderer, &rect);
    }

    void interact() {
        std::cout << "Interacting with " << name << std::endl;
    }
};

class GameEngine {
public:
    GameEngine() : window(nullptr), renderer(nullptr), isRunning(true), playerX(100), playerY(100) {}

    bool init() {
        if (SDL_Init(SDL_INIT_VIDEO) < 0) {
            std::cerr << "SDL could not initialize! SDL_Error: " << SDL_GetError() << std::endl;
            return false;
        }

        window = SDL_CreateWindow("RPG Game with SDL2",
                                  SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
                                  SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
        if (!window) {
            std::cerr << "Window could not be created! SDL_Error: " << SDL_GetError() << std::endl;
            return false;
        }

        renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
        if (!renderer) {
            std::cerr << "Renderer could not be created! SDL_Error: " << SDL_GetError() << std::endl;
            return false;
        }

        // Create NPCs
        npcs.push_back(NPC(400, 300, "Merchant"));
        npcs.push_back(NPC(600, 400, "Warrior"));

        return true;
    }

    void gameLoop() {
        SDL_Event e;

        while (isRunning) {
            while (SDL_PollEvent(&e) != 0) {
                if (e.type == SDL_QUIT) {
                    isRunning = false;
                }
                if (e.type == SDL_KEYDOWN) {
                    handleInput(e.key.keysym.sym);
                }
            }

            update();
            render();
        }
    }

    void update() {
        // Add your game logic here (e.g., check for interactions, move NPCs)
    }

    void render() {
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);  // Clear screen (black)
        SDL_RenderClear(renderer);

        // Render player
        SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);  // Red player
        SDL_Rect playerRect = {playerX, playerY, 50, 50};
        SDL_RenderFillRect(renderer, &playerRect);

        // Render NPCs
        for (auto& npc : npcs) {
            npc.render(renderer);
        }

        // Present the back buffer to the screen
        SDL_RenderPresent(renderer);
    }

    void handleInput(SDL_Keycode key) {
        const int MOVE_SPEED = 5;

        if (key == SDLK_w) { playerY -= MOVE_SPEED; }
        if (key == SDLK_s) { playerY += MOVE_SPEED; }
        if (key == SDLK_a) { playerX -= MOVE_SPEED; }
        if (key == SDLK_d) { playerX += MOVE_SPEED; }

        // Handle interaction with NPCs (simple distance check)
        for (auto& npc : npcs) {
            if (playerX < npc.x + 50 && playerX + 50 > npc.x &&
                playerY < npc.y + 50 && playerY + 50 > npc.y) {
                if (key == SDLK_e) {  // Press "E" to interact
                    npc.interact();
                }
            }
        }
    }

    void cleanUp() {
        SDL_DestroyRenderer(renderer);
        SDL_DestroyWindow(window);
        SDL_Quit();
    }

private:
    SDL_Window* window;
    SDL_Renderer* renderer;
    bool isRunning;

    int playerX, playerY;  // Player's position

    std::vector<NPC> npcs;  // List of NPCs
};

int main() {
    GameEngine gameEngine;

    if (!gameEngine.init()) {
        std::cerr << "Failed to initialize the game engine." << std::endl;
        return -1;
    }

    gameEngine.gameLoop();
    gameEngine.cleanUp();

    return 0;
}
