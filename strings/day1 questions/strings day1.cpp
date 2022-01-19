//Two given strings are anagram of each other or not 
//time complexity: O(n)
//space complexity: O(1)

#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s1,s2;
   cin>>s1;
   cin>>s2;
   int count[256]={0};
   int count1[256]={0};
   for(int i=0;i<s1.size();i++)
   {
       ++count[s1[i]];
   }
   for(int i=0;i<s2.size();i++)
   {
       ++count1[s2[i]];
   }
   for(int i=0;i<256;i++)
   {
       if(count[i]!=count1[i])
          { cout<<"Not anagram";
             return 0;
          }
        
   }
   cout<<"anagram";
   return 0;

}
