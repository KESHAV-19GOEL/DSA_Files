#include <bits/stdc++.h> 
int firstv(vector<int>& arr, int n, int k)
{
       int start=0,end =n;
    int ans = -1,find ;

     while(start<=end)
    {
        find = start+(end-start)/2;
        if(arr[find] < k)
            end =find+1;
        else if(arr[find] == k)
        {    end = find-1;
        end = end-1;
           ans= find;}
       else if(arr[find] >k)
            start =find+1;        
  
      
         
     }
    return ans;
}
int lastv(vector<int>& arr, int n, int k)
{
       int start=0,end =n;
    int ans = -1,find ;

     while(start<=end)
    {
        find = start+(end-start)/2;
        if(arr[find] < k)
            end =find+1;
        else if(arr[find] == k)
        {  end = find-1;
         start= start +1;
           ans= find;
        }
       else if(arr[find] >k)
            start =find+1;        
  
       
        
     }
     return ans;
}


pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{   
   
      pair<int,int> p;
    p.first = firstv( arr,  n,  k);
    p.second = lastv(arr,  n, k);

return p;

}