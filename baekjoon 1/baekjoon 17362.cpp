#include<bits/stdc++.h>
int main()
{
	int n;
	scanf("%d",&n);
	n--;
	n%=8;
	if(n>4){
		n=8-n;
}
	printf("%d",n+1);
}

