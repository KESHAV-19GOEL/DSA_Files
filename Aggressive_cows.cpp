bool ispossible(vector<int> &stalls,int n,int k)
{
    int count =1, diff=0;
    for(int i=0;i<stalls.size()-1;i++)
    {diff = diff + stalls[i+1]-stalls[i];
     
     //if(diff<n);      
     if(diff>=n){count++; diff = 0;}
    }if(count<k)
     {return false;}
    return true;
}// 0 3 4 7 9 10

int aggressiveCows(vector<int> &stalls, int k)
{
    // 0  3  4  7  9  10
    sort(stalls.begin(),stalls.end());
    int start=0,end = stalls[stalls.size()-1];// possibility of error
    int mid,ans;
    while(start<end)
    {mid = start + (end-start)/2;
        if(ispossible(stalls,mid,k))
        {ans = mid;
        start = mid+1;}
        else{end = mid;}
    }
    return ans;
}