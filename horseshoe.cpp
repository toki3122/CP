#include<iostream>
#include<set>
using namespace std;
int main()
{
    int s[4];
    int count=0;
    for(int i=0;i<4;i++)
    {
        cin>>s[i];
    }
    set<int>v;
    for(int i=0;i<4;i++)
    {
        v.insert(s[i]);
    }
    cout<<4-v.size();
    return 0;
}
