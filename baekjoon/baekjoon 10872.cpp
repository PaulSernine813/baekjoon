#include<bits/stdc++.h>
int pac(int num)
{
	if(0==num) return 1;
	return num*pac(num-1);
}

int main()
{
	int num;
	scanf("%d",&num);
	if(num==0) printf("1");
	else
		printf("%d",pac(num));
}
