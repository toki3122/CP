#include<iostream>
#include<string>
using namespace std;
int main()
{
    int A;
    cin>>A;
    string s=to_string(A);
    int a=s.length();
    for(int i=0;s[i]!='\0';i++)
    {
        cout<<s[i];
        if((a-1-i)%3==0 && i!=a-1)
        {
            cout<<",";
        }
    }
    return 0;
}
