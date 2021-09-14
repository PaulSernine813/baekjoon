#include<bits/stdc++.h>
int main()
{
	int n,a[1001],max=0;
	float avg=0,sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>max) max=a[i];
	}
	for(int i=0;i<n;i++)
		sum+=(float)a[i]/max*100;
	
	avg=(float)sum/n;
	
	printf("%.6f",avg);
}
