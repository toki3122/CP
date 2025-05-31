#include<iostream>
using namespace std;
int main()
{
    int n,sum1=0,count=0,sum=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    for(int i=0;i<n-1;i++)//n-1 because one element won't move from it's original position
    {
        for(int j=0;j<n-1;j++)//n-1 because we picked one element and then compared it with other elements
        {
            if(a[j]<a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        sum1+=a[i];
        count++;
        if(sum1>sum-sum1){
            cout<<count;
            break;
        }
    }
    return 0;
}
