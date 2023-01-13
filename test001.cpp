#include<iostream>
#include<array>
#include<vector>
#include<stack>
using namespace std;
int main()
{ array<int,7>a = {1,2,3,4,5};
 vector<int> arr = {1,2,3,4,5};
cout<<a.size();
cout<<endl<<arr.size();

cout<<endl<<endl;

stack<string> s;
s.push("Keshav");
s.push("Goel");
s.push("6724");

cout<<s.top();




  return 0;
}