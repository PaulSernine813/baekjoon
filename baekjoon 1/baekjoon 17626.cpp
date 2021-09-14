#include<bits/stdc++.h>
int main()
{
	int n,dp[50001],a=1;
	scanf("%d",&n);
	for(int i=2;i<=max_n;i++)
	{
		if(dp[i]==1)
		{
			a++;
			continue;
		}
		dp[i]=1+dp[i-1];
		for(j=2;j<=a;j++)
		{
			dp[i]=min(dp[i],1+dp[i-j]);
		}
	}
	
}
