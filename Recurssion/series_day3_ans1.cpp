#include<bits/stdc++.h>
using namespace std;
void series(int n)
{  static int i=0;
    if(n==0)
    return ;
    if(n==1)
    {
        cout<<1<<"/"<<pow(2,i++);

    }
    else
    { 
        if(i>0)
        {
            cout<<1<<"/"<<pow(2,i)<<"+";
        }
        else
        cout<<1<<"+";
        i++;

    }
    series(n-1);
}
int main()
{
     int n;
     cin>>n;
     series(n);
    
}