#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i==1)
          cout<<1;
        else if(i%2==0)
         cout<<"-"<<"x"<<'^'<<2*(i-1)<<"/"<<2*(i-1)<<"!";
         else
          cout<<"+"<<"x"<<'^'<<2*(i-1)<<"/"<<2*(i-1)<<"!";
    }

}