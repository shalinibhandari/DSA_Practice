#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            cout<<i+1<<"+";
        }
        else if(i==n-1){
            cout<<1<<"/"<<"("<<i+1<<"*"<<i+1<<")";
        }
        else{
            cout<<1<<"/"<<"("<<i+1<<"*"<<i+1<<")"<<"+";   
        }
    }

}