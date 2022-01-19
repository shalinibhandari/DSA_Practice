//find the rank of lexographical order of the string 
//time complexity :O(n)
//space complexity:O(1)
#include<bits/stdc++.h>
int fact(int n)
{
    if(n==0||n==1)
       return 1;
    return n*fact(n-1);
}
void call(int count[],char s1)
{
    for(int i=s1;i<256;i++)
    {
        --count[i];
    }
}
using namespace std;
int main()
{
    string s1;
    cin>>s1;
    int count[256]={0};
    for(int i=0;i<s1.size();i++)
    {
        ++count[s1[i]];
    }
    int count2[256]={0};
    int n=fact(s1.size());
    for(int i=1;i<256;i++)
    {
        count[i]+=count[i-1];
    }
    int sum=0;
    for(int i=0;i<s1.size();i++)
    {  
        int p=count[s1[i]]-1;
        

        sum+=(p)*fact(s1.size()-(i+1));
        call(count,s1[i]);
    }
    cout<<sum+1;
}