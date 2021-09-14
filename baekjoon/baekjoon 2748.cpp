#include<stdio.h>
long long int a[100001];
int main()
{
	int n;
	scanf("%d",&n);
	a[2]=1;
	for(int i=3;i<=n+1;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	printf("%lld",a[n+1]);
}