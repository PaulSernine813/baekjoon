#include<bits/stdc++.h>
int main()
{
	int n,cnt=0,flag=0;
	scanf("%d",&n);
	for(int i=1;i<n;i++)
	{
		int sum=i,j=i;
		while(j!=0)
		{
			sum+=j%10;
			j/=10;
		}
		if(sum==n){
			printf("%d",i);
			flag=1;
			break;
		}
	}
	if(flag==0)
		printf("0");
}
