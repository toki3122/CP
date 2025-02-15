#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int sum=0;
    cin>>s;
    if(s.find("0000000")==string::npos && s.find("1111111")==string::npos)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}
