//checking array is osrted or not by recurion
#include<bits/stdc++.h>
using namespace std;
int issorted(int *a,int n)
{
	if(n==1)
		return true;
	if(a[0]<a[1]&&issorted(a+1,n-1))
		return true;
	return false;
}
int main()
{
	int n=5;
	int arr[]={1,2,3,5,7};

	cout<<issorted(arr,n)<<endl;
	
}