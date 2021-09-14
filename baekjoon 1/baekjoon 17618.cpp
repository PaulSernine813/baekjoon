#include<stdio.h>
int main()
{
	long long int sum=0,cnt=0;
	int n,a=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		a=i;
		while(a>0)
		{
			sum+=a%10;
			a-=a%10;
			a/=10;
		}
		if(i%sum==0) cnt++;
		sum=0;
	}
	printf("%lld",cnt);
}