#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    /*int count=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!=t[t.length()-1-i])
            count++;
    }
    if(count==0)
        cout<<"YES";
    else
        cout<<"NO";*/
    reverse(s.begin(),s.end());
    if(s==t)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
