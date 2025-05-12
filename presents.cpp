#include<iostream>
using namespace std;
int main()
{
    int n,count;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(count=1;count<=n;count++){
    for(int i=0;i<n;i++)
    {
        if(a[i]==count)
        {
            cout<<i+1<<" ";
            break;
        }
    }}
    return 0;
}
