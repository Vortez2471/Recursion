// a raise to the power b by simple recurion and fast recursion
#include<bits/stdc++.h>
using namespace std;
int power(int a,int b) //O(b)
{
	if(b==1)
		return a;
	int ans=a*power(a,b-1);
	return ans;
}
int fastpower(int a,int b)  //O(log b)
{
	if(b==1)
		return a;

	int ans=fastpower(a,b/2)*fastpower(a,b/2);;
	
	if(b%2==0)
		return ans;
	else
		return a*ans;
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<power(a,b)<<endl;
	cout<<fastpower(a,b)<<endl;
}