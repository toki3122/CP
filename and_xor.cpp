#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long count = 0;
        long long limit = 2 * n;
        for (long long x = 0; x <= limit; x++)
        {
            long long y = x ^ n;
            if ((x & y) == 2 * n)
            {
                count++;
            }
        }
    }
    return 0;
}

