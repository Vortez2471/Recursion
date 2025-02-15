// Quick sort by recursion O(nlogn) inplace(don't need to create new array)
#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int s,int e)
{
	int i=s-1;
	int j=s;
	int pivot=arr[e];
	for(;j<e;j++)
	{
		if(arr[j]<=pivot)
			{
				i++;
				swap(arr[i],arr[j]);
			}
	}
	swap(arr[i+1],arr[e]);
	return i+1;
}

void quicksort(int arr[],int s,int e)
{
	if(s>=e)
		return;
	int p=partition(arr,s,e);

	quicksort(arr,s,p-1);
	quicksort(arr,p+1,e);

}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++)
    	cout<<arr[i]<<" ";
}