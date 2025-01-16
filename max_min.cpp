#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int x[t],y[t];
    for(int i=0;i<t;i++)
    {
        cin>>x[i]>>y[i];
    }cout<<endl;
    for(int i=0;i<t;i++)
    {
        if(x[i]<=9 && x[i]>=0 && y[i]<=9 && y[i]>=0)
        {
            if(x[i]>y[i])
                cout<<x[i]<<" "<<y[i]<<endl;
            else
                cout<<y[i]<<" "<<x[i]<<endl;
        }
    }

    return 0;
}
