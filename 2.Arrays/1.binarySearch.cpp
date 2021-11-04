#include<iostream>

using namespace std;

int binarySearch(int arr[],int n,int k)
{
  int low=0,high=n-1;
  while(low <= high)
  {
   int mid = (low+high)/2;
   if(arr[mid] == k)
   {
    return mid;
   }
   else if(arr[mid] > k)
   {
    high = mid-1;
   }
   else
   {
    low = mid + 1;
   }
  }
 return -1;
}

int main()
{
  int arr[] = {4,7,9,12,45,78};
  int n = sizeof(arr)/sizeof(int);
  int key;
  cout<<"Enter key :";
  cin>>key;
  int index = binarySearch(arr,n,key);
  if(index != -1)
    cout<<key<<" present in "<<index<<endl;
  else
    cout<<key<<" not found !"<<endl;
  return 0;
}