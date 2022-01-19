//given a string find the left most char which do not repeat
//time complexity : o(size of string )= O(n)
//space complexity : O(1)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    cin>>s1;
    int count [256];
    for(int i=0;i<s1.size();i++)
       count[s1[i]]=-1;
    for(int i=0;i<s1.size();i++)
    {  
        
        ++count[s1[i]];
    }
    for(int i=0;i<s1.size();i++)
    {
         if(count[s1[i]]==0)
           {
               cout<<s1[i]<<" ";
               break;
           }
    }
}