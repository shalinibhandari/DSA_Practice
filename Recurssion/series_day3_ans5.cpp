#include<bits/stdc++.h>
using namespace std;
void series(int n)
{  static int i=1;
    if(n==0)
       return ;
    if(n==1)
    {
        cout<<i<<"^"<<i;

    }
    else if(i==1)
    {
        cout<<i<<"+";
    }
    else
    {
        cout<<i<<"^"<<i<<"+";
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