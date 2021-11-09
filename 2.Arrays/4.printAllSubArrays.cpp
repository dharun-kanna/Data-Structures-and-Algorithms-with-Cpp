#include<iostream>

using namespace std;


void printAllSubArrays(int arr[],int n)
{
 for(int i=0;i<n;i++)
 {
   for(int j=i+1;j<n;j++)
   {
   	for(int k=i;k<j;k++)
   	{
   	 cout<<arr[k]<<" ";
   	}
   	cout<<endl;
   }
 }
}




int main()
{
  int arr[] = {1,2,3,4,5,6,7};

  int n = sizeof(arr)/sizeof(int);

  printAllSubArrays(arr,n);

  return 0;
}