#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long double sum=0,a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    cout<<sum/n;
    return 0;
}
