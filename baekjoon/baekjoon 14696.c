#include<stdio.h>
int main()
{
	int n,cnt=0,imsi;
	scanf("%d",&n);
	imsi=n;
	char num[n];
	while(n--)
	{
		int a[5]={0},imsi=0,b[5]={0},k=0;
		scanf("%d",&k);
		for(int i=0;i<k;i++)
		{
			scanf("%d",&imsi);
			if(imsi==1) a[1]++;
			else if(imsi==2) a[2]++;
			else if(imsi==3) a[3]++;
			else if(imsi==4) a[4]++;
		}
		scanf("%d",&k);
		for(int i=0;i<k;i++)
		{
			scanf("%d",&imsi);
			if(imsi==1) b[1]++;
			else if(imsi==2) b[2]++;
			else if(imsi==3) b[3]++;
			else if(imsi==4) b[4]++;
		}
		if(a[4]>b[4])
			num[cnt]='A';
		else if(a[4]<b[4])
			num[cnt]='B';
		else if(a[3]>b[3])
			num[cnt]='A';
		else if(a[3]<b[3])
			num[cnt]='B';
		else if(a[2]>b[2])
			num[cnt]='A';
		else if(a[2]<b[2])
			num[cnt]='B';
		else if(a[1]>b[1])
			num[cnt]='A';
		else if(a[1]<b[1])
			num[cnt]='B';
		else 
			num[cnt]='D';
		cnt++;	
	}
	for(int i=0;i<imsi;i++)
	{
		printf("%c\n",num[i]);
	}
}