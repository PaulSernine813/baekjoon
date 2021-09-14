#include<bits/stdc++.h>

using namespace std;
int stu[2][7];
int main()
{
	int room=0,n,k,grade,gender;
	scanf("%d",&n);
	scanf("%d",&k);
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&gender,&grade);
		stu[gender][grade]++;
	}
	for(int i=1;i<7;i++)
	{
		for(int j=0;j<=1;j++)
		{
			room+=stu[j][i]/k;
			if(stu[j][i]%k!=0) room++;
		}
	}
	printf("%d",room);	
}
