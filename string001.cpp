#include<bits/stdc++.h>
using namespace std;
int main()
{          string  str = "jtyiki";
       int arr[26] = {0,0}; 
     int ans; char ch;
     for(int i=0;i<str.size();i++)
     {  ch = str[i];  
        
        ans  = (ch - 'a');
       
         arr[ans]++;
         
     } ans = 0;
     
     for(int i=0;i<26;i++)
     {
         if(arr[i] > arr[ans])
         ans = i;
         cout<<arr[i]<<"  "<<ans<<endl;
     }
     cout<<ans<<endl;
     char answer = (ans + 'a');
     cout<<answer;
  return 0;
}