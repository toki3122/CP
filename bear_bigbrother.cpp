#include<iostream>
using namespace std;
int main()
{
    int n,m,count=0;
    cin>>n>>m;
   while(n<=m)
    {
        n*=3;
        m*=2;
        count++;
        if(n>m){
            cout<<count;
            break;}
    }
    return 0;
}
