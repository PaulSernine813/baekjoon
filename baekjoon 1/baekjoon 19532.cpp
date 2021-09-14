#include<stdio.h>
int main()
{
	int x,y,a,b,c,d,e,f;
	/*scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	if(a==0){
		y=c/b;
		x=(f-e*y)/d;
	}
	else if(d==0){
		y=e/f;
		x=(c-b*y)/a;
	}
	else
	{
		y=(c*d-f*a)/(b*d-e*a);
		x=(c-b*y)/a;
	}	
	printf("%d %d",x,y);*/
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	for(int i=-999;i<=999;i++)
	{
		for(int j=-999;j<=999;j++)
		{
			if(i*a + j*b == c && i*d + j*e == f)
			{
				printf("%d %d",i,j);
				break;
			}
		}
	}
}
