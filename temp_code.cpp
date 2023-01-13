#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
  vector<int> answer;
    int j=0,k=0;
    int ret;
    for(int i=0; i<n; i++)
    { ret = arr1[i];
     
        for(int j=k; j<m; j++)
        {
            if(ret == arr2[j])
            {   k =j;
                answer.push_back(arr2[j]);
           arr2[j] = -123456;
             break;
           }
          
        }
    }
    return answer;
}