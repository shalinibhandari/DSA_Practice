#include<bits/stdc++.h>
using namespace std;
void printreverse(int n)
{
    if(n==0)
       return ;
       cout<<n<<" ";
    printreverse(n-1);
    
}
int main()
{
    int n;
    cin>>n;
    printreverse(n);
}
