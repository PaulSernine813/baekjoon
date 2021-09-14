#include<bits/stdc++.h>
int main()
{
	int n,m,min,smp,sys,flag1=1,flag2=1;
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&min,&smp);
		if(min!=smp)
		{
			flag1=0;
			break;
		}
	}
	if(flag1==0) flag2=0;
	if(m!=0)
	{
		for(int i=0;i<m;i++)
		{
			scanf("%d %d",&min,&sys);
			if(min!=sys)
			{
				flag2=0;
				break;
			}
		}
	}
	if(flag1==1 && flag2!=1) printf("Why Wrong!!!");
	else if(flag1==1 && flag2==1) printf("Accepted");
	else if(flag1==0 && flag2==0) printf("Wrong Answer");
}

