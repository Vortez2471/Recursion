// Binary search by recursion
#include<bits/stdc++.h>
using namespace std;

void bsearch(int arr[],int key,int st,int en)
{
	int mid=(st+en)/2;
	if(st>en)
		return;
	if(arr[mid]==key)
		cout<<"Found at "<<mid<<endl;
	if(arr[mid]>key)
		bsearch(arr,key,st,mid-1);
	else
		bsearch(arr,key,mid+1,en);
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	int key;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cin>>key;
	bsearch(arr,key,0,n-1);
}