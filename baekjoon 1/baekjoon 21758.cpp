#include<stdio.h>

typedef long long LL;

LL arr[100002];
LL sum[100002], ans;
LL max(LL a,LL b)x
{
  if(a<b)
    return b;
  else
    return a;
}
int main()
{
    int n,i;

    scanf("%d",&n);
    for(i=1;i<=n;i++){
      scanf("%lld", &arr[i]);
      sum[i]=sum[i-1] + arr[i];
    }
    for(i=2;i<n;i++){
      ans=max(ans,2*sum[n]-arr[1]-arr[i]-sum[i]);
      ans=max(ans,sum[n]-arr[1]-arr[n]+arr[i]);
      ans=max(ans,sum[n]-arr[n]-arr[i]+sum[i-1]);
      }
    printf("%lld",ans);
}
