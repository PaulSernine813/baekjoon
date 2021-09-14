#include<bits/stdc++.h>
int main()
{
	int a[101],n,m,max=0;
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<n;i++)
	{
		for(int j=1+i;j<n;j++)
		{
			for(int k=j+1;k<n;k++)
			{
				if(a[i]+a[j]+a[k]<=m)
				{
					if(a[i]+a[j]+a[k]>max)
						max=a[i]+a[j]+a[k];
				}
			}
		}
	}
	printf("%d",max);
}
