#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=0,b=0,numb=0,max=0;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        numb+=b;
        numb-=a;
        if(max<numb)
            max=numb;
    }
    cout<<max;
    return 0;
}
