#include<bits/stdc++.h>
int main()
{
	int a=100,b=1010;
	while(a!=0 && b!=0)
	{
		scanf("%d %d",&a,&b);
		if(a==0 && b==0) break;
		printf("%d\n",a+b);	
	}	
}
