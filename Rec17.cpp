// Subsequences of a string by recursion
#include<bits/stdc++.h>
using namespace std;

void generate_subsequence(string s,string ans)
{
	if(s[0]=='\0')
	{
		cout<<ans<<", ";
		return;
	}
	generate_subsequence(s.substr(1),ans+s[0]);
	generate_subsequence(s.substr(1),ans);
}

int main()
{
	string s;
	cin>>s;
	generate_subsequence(s,"");
}