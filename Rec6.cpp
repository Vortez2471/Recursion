// multiply without * and covert string into integer by recursion
#include<bits/stdc++.h>
using namespace std;

int mul(int a,int b)
{
	if(b==1)
		return a;
	int ans=a+mul(a,b-1);
	return ans;
}

void str(string s,int n)
{
	if(n==0)
		return;
	str(s,n-1);
	int ans=s[n-1]-48;
	cout<<ans;
}

int main()
{
	int a,b;
	cin>>a>>b;
	string s;
	cin>>s;
	cout<<mul(a,b)<<endl;
	str(s,s.size());
}