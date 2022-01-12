#include<bits/stdc++.h>
using namespace std;
void printreverse(int n)
{
    if(n==0)
       return ;
       
    printreverse(n-1);
    cout<<n<<" ";
    
}
int main()
{
    int n;
    cin>>n;
    printreverse(n);
}
