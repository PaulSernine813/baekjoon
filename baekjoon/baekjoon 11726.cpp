#include<bits/stdc++.h>
int dp[1001];
int solve(int n)
{
	if(n==1)
		return 1;
	if(n==2)
		return 2;
	if(dp[n]!=-1)
		return dp[n];
	return dp[n] = (solve(n-1)+solve(n-2))%10007;
}

int main()
{
	int n;
	memset(dp,-1,sizeof(dp));
	scanf("%d",&n);
	printf("%d",solve(n));
}
