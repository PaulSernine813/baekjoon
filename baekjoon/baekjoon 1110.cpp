#include<stdio.h>
int main()
{
	int n,a,b,c,d,ans,cnt=0;
	scanf("%d",&n);
	ans=n;
	while(1)
	{
		a=n/10;
		b=n%10;
		c=(a+b)%10;
		d=(b*10)+c;
		n=d;
		cnt++;
		if(d==ans)
			break;
	}
	printf("%d",cnt);
}