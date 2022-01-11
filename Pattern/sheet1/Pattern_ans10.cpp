#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        if(i<n/2)
        {  for(int j=0;j<=i;j++)
             cout<<" ";
            cout<<i+1;
            for(int j=0;j<n-i;j++)
               cout<<" ";
            cout<<i+1;
        }
        else if(i==n/2)
        {   for(int j=0;j<i;j++)
             cout<<"  ";
            cout<<i+1;
        }
        else{
             for(int j=0;j<n-i;j++)
               cout<<" ";
            cout<<i+1;
                 for(int j=0;j<i;j++)
               cout<<" ";
            cout<<i+1;
        }
        cout<<"\n";
    }
}