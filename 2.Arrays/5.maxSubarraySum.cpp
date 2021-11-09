#include<iostream>

using namespace std;


void maxSubarraySum(int arr[],int n)
{
  int currentSum=0,maxSum=0;
 for(int i=0;i<n;i++)
 {
   for(int j=i;j<n;j++)
   {
    currentSum = 0;
   	for(int k=i;k<=j;k++)
   	{
   	 currentSum += arr[k];
   	}
    // cout<<"Current:"<<currentSum<<" maxSum:"<<maxSum<<endl;
    maxSum = max(maxSum,currentSum);
   }
 }

 cout<<"Max sum : "<<maxSum;
}




int main()
{
  int arr[] = {1,-8,2,3,4,5};

  int n = sizeof(arr)/sizeof(int);

  maxSubarraySum(arr,n);

  return 0;
}