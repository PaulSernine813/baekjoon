#include<cstdio>
int a[10003];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int num;
		scanf("%d",&num);
		a[num]++;
	}
	for(int i=1;i<=10000;i++)
	{
		for(int j=0;j<a[i];j++)
			printf("%d\n",i);
	}
}	