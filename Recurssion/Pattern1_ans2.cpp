#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int r=1,p=0,s=1;
    for(int i=0;i<n;i++)
    {  for(int j=0;j<=i;j++)
          {  if(i==0)
              cout<<1;
            else{
              s=r+p;
             p=r;
             r=s;
             cout<<s<<" ";}
          }
          cout<<"\n";

    }
}