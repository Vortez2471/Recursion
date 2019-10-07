// 2048 problem by recursion
#include<bits/stdc++.h>
using namespace std;
char spellings[][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
void num(int n)
{
	if(n==0)
		return;
	num(n/10);
	cout<<spellings[n%10]<<" ";

}

int main()
{
	int s;
	cin>>s;
	num(s);
}