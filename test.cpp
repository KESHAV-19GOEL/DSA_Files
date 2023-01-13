#include<iostream>
using namespace std;
int main()
{   int a[5] = {1,2,4,4,2},c=0;
       for(int i=0;i<5;i++)
       {
        c = c^a[i];
       cout<<c<<endl;
       }





  return 0;
}