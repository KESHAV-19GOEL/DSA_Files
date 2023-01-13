#include<iostream>
using namespace std;

int max(int a[],int size)
{
int max=0;

 for(int i=0;i<size-1;i++)
 {
   if(a[i]>a[max])
   max =i;
 }
return max;}
 
int min(int a[],int size)
{
int min=0;

 for(int i=0;i<size-1;i++)
 {
   if(a[i]<a[min])
   min =i;
 }
return min;
}

int main()
{   int i;
    cout<<"Enter number of elements of the array\n";
    cin>>i;

       int a[i];
       for ( int j= 0; j < i; j++)
       {
        cout<<"Enter a["<<j<<"]\n";
        cin>>a[j];
       }

cout<<endl<<endl<<endl<<"Maximum of these is a["<<max(a,i)<<"] ="<<a[max(a,i)]<<endl<<endl<<endl;

cout<<"Minimum of these is a["<<min(a,i)<<"] ="<<a[min(a,i)];


 



  return 0;
}