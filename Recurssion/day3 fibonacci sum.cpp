#include<bits/stdc++.h>
using namespace std;
int fibosum(int n)
{
    if(n==0||n==1)
      return 1;
      return fibosum(n-1)+fibosum(n-2);
}
int main()
{  
    int n;
    cin>>n;
    cout<<fibosum(n);
}