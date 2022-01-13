#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int s=0,r=1,p=1;
    cout<<0<<",";
    for(int i=0;i<n;i++)
       {
           p=s+r;
           s=r;
           r=p;
           if(i!=n-1)
           cout<<p<<",";
           else
           cout<<p;
       }

}