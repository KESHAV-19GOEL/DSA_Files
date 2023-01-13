#include<bits/stdc++.h>
using namespace std;
int main()
{
       string s = "abcdefghijklabcz";
       string s1 = "ghjgh";
       int i = s.find(s1);
       cout<<endl<<i;
         string s2 = "abcd";
       string s3;
        for(int i=1;i<=s2.size();i++)
        s3.push_back(s2[s2.size()-i]);
        cout<<s3;
  return 0;
}