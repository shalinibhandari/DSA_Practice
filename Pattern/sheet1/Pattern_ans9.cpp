#include<bits/stdc++.h>
using namespace std;
int main()
{   int n;
   cin>>n;
    char ch='A'+n-1;
    for(int i=0;i<n;i++)
    {   for(int j=0;j<i;j++)
           cout<<" ";
        for(int j=1;j<=n-i;j++)
        {   if(j==1||j==n-i)
              {cout<<ch;
            
              }
              else
              cout<<"  ";
        }
        --ch;
        cout<<"\n";
    }
}