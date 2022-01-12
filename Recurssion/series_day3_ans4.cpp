#include<bits/stdc++.h>
using namespace std;
void series(int n)
{  static int i=1;
    if(n==0)
       return ;
    if(n==1)
    {
        cout<<1<<"/"<<pow(3,i-1);

    }
    else if(i==1)
    {
        cout<<1<<"+";
    }
    else
    {
        cout<<1<<"/"<<pow(3,i-1)<<"+";
    }
    i++;
    series(n-1);
     
}
int main()
{
    int n;
    cin>>n;
    series(n);
}