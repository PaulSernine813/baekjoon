#include<bits/stdc++.h>

using namespace std;

int num[2600001],g[14],k;

void solve(int start,int weight)
{
	if(start==k)
	{
		if(weight>0) num[weight]=1;
		return;
	}
	solve(start+1,weight);
	solve(start+1,weight+g[start]);
	solve(start+1,weight-g[start]);
}
int main()
{
	int s=0,cnt=0,ha=0;
	scanf("%d",&k);
	for(int i=0;i<k;i++)
	{
		scanf("%d",&g[i]);
		s+=g[i];	
	}
	 sort(g,g+k);
	solve(0,0);
	for(int i=1;i<s;i++)
	{
		if(num[i]==0)
			ha++;
	}
	printf("%d",ha);
	return 0;
}
