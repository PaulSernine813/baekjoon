#include <stdio.h>
int dp[16][16];
int main()
{
  int n,m,k, fs=0, sc=0;
  scanf("%d %d %d",&n,&m,&k);
  for(int i=1;i<15;i++){
    dp[0][i]=1;
    dp[i][0]=1;
  }
  for(int i=1;i<15;i++)
  {
    for(int j=1;j<15;j++)
    {
      dp[i][j]=dp[i-1][j]+dp[i][j-1];
    }
  }
  if(k==0)
    printf("%d",dp[n-1][m-1]);
  else{
    k--;
    fs = dp[k/m][k%m];
    sc = dp[n-1-k/m][m-k%m-1]; 
    printf("%d",fs*sc);
  }
}