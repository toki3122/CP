#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int n,x=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        if(s[0]=='-' && s[1]=='-')
            --x;
        if(s[2]=='-' && s[1]=='-')
            --x;
        if(s[0]=='+' && s[1]=='+')
            ++x;
        if(s[2]=='+' && s[1]=='+')
            ++x;
    }cout<<x;
    return 0;
}
