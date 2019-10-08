// Tower of Hanoi by recursion
#include<bits/stdc++.h>
using namespace std;

void toh(char src,char dest,char temp,int n)
{
	if(n==0)
		return;

	toh(src,temp,dest,n-1);
	cout<<"Move "<<n<<" disk from "<<src<<" to "<<dest<<endl;
    toh(temp,dest,src,n-1);

}

int main()
{
	int n;
	cin>>n;
	char a,b,c;
	a='A';
	b='B';
	c='C';
	toh(a,c,b,n);
}