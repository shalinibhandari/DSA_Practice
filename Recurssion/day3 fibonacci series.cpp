#include<bits/stdc++.h>
using namespace std;
void fibo(int n)
{   static int s=1,r=1,p=0;
    if(n==0)
       return ;
       s=r+p;
       p=r;
       r=s;
       cout<<s<<" ";
    

    return fibo(n-1);
       
}
int main()
{
    int n;
    cin>>n;
    fibo(n);
}