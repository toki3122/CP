#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    string a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]=="10" && a[i+1]=="01" || a[i]=="01" && a[i+1]=="10")
            c++;
    }
    cout<<c+1;
    return 0;
}
