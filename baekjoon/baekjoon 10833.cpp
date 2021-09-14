#include<bits/stdc++.h>
int main()
{
	int n,sum=0,stu,apple;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&stu,&apple);
		sum+=apple%stu;
	}
	printf("%d",sum);
}
