#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n2[10001],smx[10001],n,x,cnt=0;
	scanf("%d %d",&n,&x);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&n2[i]);
		if(n2[i]<x)	{
		smx[i]=n2[i];
		cout << smx[i] << " ";
		}
	}
}
