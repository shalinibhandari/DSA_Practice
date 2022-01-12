#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int j=0,k=0;
    for(int i=0;i<n;i++)
    {   if(i<n/2)
        { 
            for( j=0;j<=i;j++)
            { 
                cout<<j+1;
            }
            for(int  j=1;j<n-2*i-1;j++)
              cout<<" ";
            for(int j=i;j>=0;j--)
            {
                cout<<n-j;
            }

        }
        else if(i==n/2)
        {
            for(int j=0;j<n;j++)
              cout<<j+1;
        }
        else{

            for(int j=0;j<n-i;j++)
              cout<<j+1;
            for(int  j=1;j<=2*i-n;j++)
              cout<<" ";
              for(int j=n-i-1;j>=0;j--)
               cout<<n-j;

        }
        cout<<"\n";
    }
}