#include <iostream>
using namespace std;
int main()
{
    int y,a[4];
    cin>>y;
    for(int i=y+1;;i++)
    {
        int k=i;
        for (int j=3;j>=0;j--)
        {
            a[j]=k%10;
            k/=10;
        }
        if (a[0]!=a[1] && a[0]!=a[2] && a[0]!=a[3] && a[1]!=a[2] && a[1] != a[3] && a[2] != a[3])
        {
            cout<<i;
            break;
        }
    }

    return 0;
}

