#include <bits/stdc++.h> 
long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	 vector<int> arr;
 // n = number of days   m = no of hours
 arr[n-1] = accumulate(time.begin(),time.end(),0);
 while(arr[n-1]>arr[n-2])
 {
  
 for(int i=n-1;i>0;i--)
 {
  if(arr[i-1]<arr[i])
  {arr[i-1] = arr[i-1] + time[0];
   arr[i] = arr[i] - time[0];
   time.erase(time.begin());
   
   }
 }
 }
 int temp = arr[0];
 for(int i=1;i<arr.size();i++)
 {if(arr[i]>temp)
     temp = arr[i];
  
 
  
  }
	cout<<temp;
    return 0;
}