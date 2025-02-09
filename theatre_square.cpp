#include<iostream>
using namespace std;
int main()
{
    long long n,m,a,n1,m1;
    cin>>n>>m>>a;
    if(n%a==0)
        n1=n/a;
    else
        n1=(n/a)+1;
    if(m%a==0)
        m1=m/a;
    else
        m1=(m/a)+1;
    cout<<n1*m1;
    return 0;
}
