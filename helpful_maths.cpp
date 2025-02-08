#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int j=0;j<s.length()-1;j++)
    {
        for(int i=0;i<s.length()-1;i++){
        if(s[i]=='+'){
            if(s[i-1]>s[i+1])
            {
                char a;
                a=s[i-1];
                s[i-1]=s[i+1];
                s[i+1]=a;
            }
        }
    }
    }
    cout<<s;
    return 0;
}
