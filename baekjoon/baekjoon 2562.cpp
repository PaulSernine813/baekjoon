#include<bits/stdc++.h>
int main()
{
	int num,max=0,cnt=0;
	for(int i=0;i<9;i++)
	{
		scanf("%d",&num);
		if(num>max){
			max=num;
			cnt=i+1;}
	}
	printf("%d\n%d",max,cnt);
}
