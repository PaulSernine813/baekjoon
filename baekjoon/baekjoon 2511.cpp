#include<bits/stdc++.h>
int main()
{
	int anum[10],bnum[10],asum=0,bsum=0,winner=0;
	int flag=0,ascore=0,bscore=0;
	
	for(int i=0;i<10;i++)
		scanf("%d",&anum[i]);
		
	for(int i=0;i<10;i++)
		scanf("%d",&bnum[i]);
		
	for(int i=0;i<10;i++)
	{
		if(anum[i]>bnum[i])
			{ascore+=3;winner=1;}
		else if(anum[i]<bnum[i])
			{bscore+=3;winner=2;}
		else
		{
			ascore++;
			bscore++;
		}
	}
	
	printf("%d %d\n",ascore,bscore);
	
	if(ascore>bscore)
	{
		printf("A");
		flag=1;
	}
	else if(ascore<bscore)
	{
		printf("B");
		flag=1;
	}
	else{
		if(winner==1)
		{
			printf("A");
		}
		else if(winner==2)
		{
			printf("B");
		}
		else
		{
			printf("D");
		}
	}
	
	
}
