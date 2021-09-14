#include<stdio.h>
#include<cmath>
int min[5001];
void min2(int n)
{
	for(int i=0;i<n+1;i++)
	{
		min[i]=100001;
	}
}
int sumf(int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=min[i];
	}
	return sum;
}
int main()
{
	int n,cnt=0;
	scanf("%d",&n);
	min2(n);
	int x[n+1],y[n+1];
	for(int i=0;i<n;i++)
		scanf("%d %d",&x[i],&y[i]);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
				if(y[i]==y[j] && i!=j)
				{
					if(min[i]>abs(x[i]-x[j]))
						min[i]=abs(x[i]-x[j]);
				}
		}
	}
	printf("%d",sumf(n));
}