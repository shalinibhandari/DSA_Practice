//find the left most character which is repeated more tha  one time
//time complexity: O(n)
//space complexity: O(1)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    cin>>s1;
    int count[256]={0};
    for(int i=0;i<s1.size();i++)
       count[s1[i]]=-1;
    int temp=INT_MAX;
    for(int i=0;i<s1.size();i++)
    {
        if(count[s1[i]]==-1)
           count[s1[i]]=i;
        else 
          {
              temp=min(temp,count[s1[i]]);
          }

    }
    cout<<temp;
}