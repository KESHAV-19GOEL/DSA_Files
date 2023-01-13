#include<iostream>
#include<map>
using namespace std;
int main()
{map<int,string> m;
string str;
       for (int i = 0; i < 5; i++)
       {cin>>str;
           m[i] = str;
        
       }
       
for (auto i:m)
       {cout<<i.first<<endl;
           
                                                      
       }



  return 0;
}