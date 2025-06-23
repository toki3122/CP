#include<iostream>
#include<vector>
using namespace std;
int main()
{
    long long int n,k;
    cin>>n>>k;
    long long m=(1+n)/2;
    if(k<=m)
        cout<<2*k-1;
    else
        cout<<2*(k-m);
    return 0;
}
