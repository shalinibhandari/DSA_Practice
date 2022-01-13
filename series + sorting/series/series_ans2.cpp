#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
      {
          if(i==0)
            cout<<i+1<<"+";
            else if(i==n-1)
            {
                cout<<"(";
               for(int j=0;j<=i;j++)
               {
                   if(j==i)
                     cout<<j+1;
                    else
                    cout<<j+1<<"+";
               }
               cout<<")";
            }
           else
           {
               cout<<"(";
               for(int j=0;j<=i;j++)
               {
                   if(j==i)
                     cout<<j+1;
                    else
                    cout<<j+1<<"+";
               }
               cout<<")"<<"+";
           }


      }
}