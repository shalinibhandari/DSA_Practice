#include<bits/stdc++.h>
using namespace std;
void series(int n)
{  static int i=0;
    if(n==0)
    return ;
    if(i==0)
    {
       cout<<i+1<<"+";
       
    }
    else if(n==1)
    {
        cout<<pow(3,i);
    }
    else 
    {
        cout<<pow(3,i)<<"+";
        
    }
     ++i;
    series(n-1);
}
int main()
{
     int n;
     cin>>n;
     series(n);
    
}