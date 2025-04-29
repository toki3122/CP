#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,m,p;
    bool found=false;
    cin>>n;
    m=n;
    for(int i=1;i<=3;i++)
    {
        p=0;
        p=n%10;
        n/=10;
        if(p!=4 && p!=7)
        {
            break;
        }
        if(n==0)
        {
            found=true;
            break;
        }
    }
    n=m;
    int a[]={4,7,44,77,47,74,444,447,474,477,744,747,774,777};
    for(int i=0;i<14;i++)
    {
        if(n%a[i]==0)
        {
            found=true;
            break;
        }
    }
    if(found==false)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}
