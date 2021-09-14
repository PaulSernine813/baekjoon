#include<stdio.h>
int dp[17][17];
int main()
{
	int frs,sec,n,m,k;
	scanf("%d %d %d",&n,&m,&k);
	for(int i=1;i<15;i++)
	{
		dp[i][0]=1;
		dp[0][i]=1;
	}
	for(int i=1;i<=15;i++)
	{
		for(int j=1;j<=15;j++)
		{
			dp[i][j]=dp[i-1][j]+dp[i][j-1];
		}
	}
	if(k!=0){
		k--;
	frs=dp[k/m][k%m];
	sec=dp[n-1-k/m][m-k%m-1];
	printf("%d",frs*sec);
	}
	else
	{
		printf("%d",dp[n-1][m-1]);
	}
}