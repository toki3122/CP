#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    if(sum==0)
        cout<<"EASY";
    else
        cout<<"HARD";
    return 0;
}
