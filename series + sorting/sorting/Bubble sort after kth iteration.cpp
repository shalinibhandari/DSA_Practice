//bubble sort
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>k;
    for(int i=0;i<n;i++)
    {   if(i==k)
            break;
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
               swap(a[j],a[j+1]);
        }
    }
    for(int i=0;i<n;i++)
       cout<<a[i]<<" ";
}