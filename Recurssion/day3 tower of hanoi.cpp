#include<bits/stdc++.h>
using namespace std;
void toh(int n,char a,char b,char c)
{
    if(n==0)
     return ;
     toh(n-1,a,c,b);
     cout<<a<<" to "<<b<<" using "<<c<<"\n";
     toh(n-1,c,b,a);
     return ;
}
int main()
{
    int n;
    cin>>n;
    char a='A',b='B',c='C';
    toh(n,a,b,c);
}