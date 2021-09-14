#include<stdio.h>
int main()
{
	int a,b,c,n,cnt=0;
	scanf("%d %d %d %d",&a,&b,&c,&n);
	for(int i=0;i<=n/a;i++)
	{
		for(int j=0;j<=n/b;j++)
		{
			for(int k=0;k<=n/c;k++)
			{
				if(n==i*a+j*b+k*c)
				{
					cnt++;
					break;
				}
				else
					continue;
			}
		}
	}
	if(cnt==0)
		printf("0");
	else 
		printf("1");
}