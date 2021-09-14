#include<bits/stdc++.h>
int main()
{
	int n,d,a[100001],max=-201,sum=0,cnt=0;
	scanf("%d %d",&n,&d);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(i<d)
			sum+=a[i];
	}
	max = sum;	
	for(int i=d;i<n;i++)
	{
		sum += a[i];
		sum -= a[i-d];
		if(sum>max) max=sum;
	}
	printf("%d",max);
}
