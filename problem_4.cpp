#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int H, M;
    cin >> H >> M;
    double hour_angle = 30 * H + 0.5 * M;
    double minute_angle = 6 * M;
    double angle = abs(hour_angle - minute_angle);
    double smaller_angle = min(angle, 360 - angle);
    cout<<smaller_angle;
    return 0;
}

