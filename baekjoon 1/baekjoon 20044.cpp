#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,w[100001];
	scanf("%d",&n);
	for(int i=0;i<n*2;i++)
		scanf("%d",&w[i]);
	sort(w,w+n*2);
	int ans=w[0]+w[2*n-1];
	for(int i=1;i<n;i++)
	{
		if(ans>w[i]+w[2*n-1-i])
			ans=w[i]+w[2*n-1-i];
	}
	printf("%d",ans);	
}
