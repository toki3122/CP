#include<iostream>
using namespace std;
int main()
{
    long long int n,m=0,count=0;
    cin>>n;
    laga:
    m=n%10;
    n=n/10;
    if(m==4 || m==7)
        count++;
    if(n!=0)
        goto laga;
    if(count==4 || count==7)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
