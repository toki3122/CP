#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    char c=toupper(s[0]);
    s[0]=c;
    cout<<s;
    return 0;
}
