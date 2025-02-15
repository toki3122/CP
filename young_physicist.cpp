#include<iostream>
using namespace std;
int main()
{
    int n,sumx=0,sumy=0,sumz=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x=0,y=0,z=0;
        cin>>x>>y>>z;
        sumx+=x;
        sumy+=y;
        sumz+=z;
    }
    if(sumx==0 && sumy==0 && sumz==0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
