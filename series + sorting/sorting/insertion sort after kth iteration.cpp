//insertion
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
    for(int i=1;i<n;i++)
    {   if(k==i)
           break;
        int temp=a[i];
        int j=i-1;
        while(j>=0&&temp<a[j])
        {
            a[j+1]=a[j];
            --j;
        }
        swap(a[j+1],temp);
    }
    for(int i=0;i<n;i++)
      cout<<a[i]<<" ";
}