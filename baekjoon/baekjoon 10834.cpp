#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,a,b,s,turn=1;
	bool  p=false;
	scanf("%d",&m);
	for(int i=0;i<m;i++)
	{
		scanf("%d %d %d",&a,&b,&s);
		turn*= (float)b/a;
		if(s==1)
			p=!p;
		else continue;
	}
	if(p==true)
		printf("1 %d",turn);
	else
		printf("0 %d",turn);
}
