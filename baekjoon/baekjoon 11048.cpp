#include<stdio.h>
int max(int a,int b)
{
    if(a<b)
        return b;
    else
        return a;
}
int main()
{
    int dp[1002][1002]={0},n,m;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            scanf("%d",&dp[i][j]);
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            dp[i][j] += max(dp[i][j-1],dp[i-1][j]);
        }
    }
    printf("%d",dp[n][m]);
}
