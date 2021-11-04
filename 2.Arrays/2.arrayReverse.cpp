#include<iostream>

using namespace std;

void reverseArray(int arr[],int n)
{
 int s=0,e=n-1;
 while(s<=e)
 {
  swap(arr[s],arr[e]);
  s += 1;
  e -= 1;
 }
}

int main()
{
 int arr[] = {7,3,52,5,8,2,1};
 int n = sizeof(arr)/sizeof(int);
 cout<<"Before : ";
 for(int a:arr)
 {
  cout<<a<<" ";
 }
 cout<<endl;
 reverseArray(arr,n);
  cout<<"After : ";
 for(int a:arr)
 {
  cout<<a<<" ";
 }



}