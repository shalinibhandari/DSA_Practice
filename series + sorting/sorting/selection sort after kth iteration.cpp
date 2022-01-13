//selection 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>k;
    for(int i=0;i<n;i++)
    {   if(k==i)
           break;
        int min=a[i];
        int ind=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<min)
            {
                min=a[j];
                ind=j;
            }
        }
        if(ind!=i)
        {
            swap(a[i],a[ind]);
        }
    }
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    
}