#include <bits/stdc++.h>
using namespace std;
int main()
{
       vector<int> arr = {1,4,6,8,45,4,2,4,76,34,22};
        sort(arr.begin(),arr.end());
         // 1  2  4  4  4  6  8  22  34  45  76 
        int start=0,end=arr.size(),c=1,key;
        cout<<"Enter the number you wanna search in the array\n";
        cin>>key;

        while(start!=end)     
        {
          if(arr[(start+end)/2]>key)    
           {
            end = (start+end+1)/2;
           } 
           else if(arr[(start+end)/2]<key)    
           {
            start = (start+end)/2;
           }
           else if(arr[(start+end)/2] == key)
           {
           c=0; break;   // here 
           }  
           if(start == end-1)
           break;
        }
    if(c==0)
    cout<<key<<" is present in the array\n";
    else
    cout<<key<<" is not present in the array\n";


  return 0;
}