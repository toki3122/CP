#include<iostream>
using namespace std;
int main()
{
    int n,p=0,q=0,count=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>p>>q;
        if(q-p>=2)
            count++;
    }
    cout<<count;
    return 0;
}
