#include<iostream>
#include<queue>
using namespace std;
int main()
{ queue<int> a;
int n;
cout<<"Enter a[1]"<<endl;
cin>>n;
a.push(n);

cout<<"Enter a[1]"<<endl;
cin>>n;
a.push(n);

cout<<"Enter a[1]"<<endl;
cin>>n;
a.push(n);
       
cout<<"Enter a[i]"<<endl;
cin>>n;
a.push(n);

int j = a.size();
for(int i=0;i<j;i++)
{
 cout<<a.front()<<endl;

a.pop();

}




  return 0;
}