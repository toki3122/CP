#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    int n,t;
    cin>>n>>t;
    cin>>a;
    for(int i=0;i<t;i++)
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]=='B' && a[i+1]=='G')
            {
                a[i]='G';
                a[i+1]='B';
                i++;
            }
        }
    }
    cout<<a;
    return 0;
}
