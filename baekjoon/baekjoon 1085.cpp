#include<bits/stdc++.h>
int main()
{
	int min=1007,x,y,w,h;
	scanf("%d %d %d %d",&x,&y,&w,&h);
	if(min>w-x)
		min=w-x;
	if(min>h-y)
		min=h-y;
	if(min>x)
		min=x;
	if(min>y)
		min=y;
	printf("%d",min);
}
