#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,counta=0,countd=0;
    string s;
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='A')
            counta++;
        else
            countd++;
    }
    if(counta>countd)
        cout<<"Anton";
    else if(counta==countd)
        cout<<"Friendship";
    else
        cout<<"Danik";
    return 0;
}
