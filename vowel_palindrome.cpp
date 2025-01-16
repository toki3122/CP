#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t,n;
    string v="aeiou";
    string s;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            s+=v[(i+t)%5];
        }
        cout<<s<<endl;
        s="";
    }
    return 0;
}
