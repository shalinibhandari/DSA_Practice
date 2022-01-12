#include<bits/stdc++.h>
using namespace std;
int prime(int n)
{
    
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        return 0;
    }
    if(n!=1)
      return 1;
     else
      return 0;
}
void printreverse(int n)
{
    if(n==0)
       return ;
    
    printreverse(n-1);
    if(prime(n))
       cout<<n<<" ";

}
int main()
{
    int n;
    cin>>n;
    printreverse(n);
}
