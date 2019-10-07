//tiling problem by recurion





//ERROR





#include<bits/stdc++.h>
using namespace std;

int tiles(int n,int m)
{
	if(n==0||m==0)
		return 1;
	int c1=1+tiles(n,m-1);
	int c2=1+tiles(n,m-4);
	return c1+c2;
}

int main()
{
	cout<<tiles(4,16)<<endl;
}