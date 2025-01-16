#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5,6,7};
    int lo=0,hi=(sizeof(a)/sizeof(int))-1,i,x;
    cin>>x;
    while(lo<=hi)
    {
        i=(lo+hi)/2;
        if(a[i]==x)
        {
            cout<<i<<endl;
            break;
        }
        if(a[i]<x)
            lo=i+1;
        else
            hi=i+1;
    }
    return 0;
}
