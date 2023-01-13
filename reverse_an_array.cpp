#include<iostream>
using namespace std;

void reverse_array(int arr[],int size)
{
 int a;
 for (int i = 0; i < size/2 + 1/2; i++)
 {
    a = arr[i];
    arr[i] =arr[size-1-i];
    arr[size-1-i] = a;
 }
 
}

int main()
{
       int arr[10];
       cout<<"Enter the value of array\n";
       for (int i = 0; i < sizeof(arr)/4; i++)
       {
        cin>>arr[i];
       }
       cout<<endl;
      reverse_array(arr,10);
      for(int i=0;i<sizeof(arr)/4;i++)
      cout<<arr[i]<<"  "; 


  return 0;
}