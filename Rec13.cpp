// Permutaions a string by recursion
#include<bits/stdc++.h>
using namespace std;

void generate_permutation(char*in,int i)
{
	if(in[i]=='\0')
		{
			cout<<in<<endl;
			return;
		}
	for(int j=i;in[j]!='\0';j++)
	{
		swap(in[i],in[j]);
		generate_permutation(in,i+1);
		swap(in[i],in[j]);
	}

}

int main()
{
	char s[100];
	cin>>s;
	generate_permutation(s,0);
}
