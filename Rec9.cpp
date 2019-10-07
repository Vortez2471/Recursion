// Linear search by recursion
#include<bits/stdc++.h>
using namespace std;

void lsearch(int arr[],int key,int n)
{
	if(n<0)
		return;
	if(key==arr[n])
		cout<<"Found at "<<n;
	lsearch(arr,key,n-1);

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
	lsearch(arr,key,n-1);
}