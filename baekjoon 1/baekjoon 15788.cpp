#include<bits/stdc++.h>
int main()
{
	int magic[500][500],n,garo,saro,dae,m,ctrli,ctrlj,garosum=0,sarosum=0,daesum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&magic[i][j]);
		}
	}
	for(int i=0;i<n;i++)
	{
		garo+=magic[0][i];
		saro+=magic[i][0];
		dae+=magic[i][i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(magic[i][j]==0)
			{
				ctrli=i;
				ctrlj=j;
				break;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		garosum+=magic[ctrli][i];
		sarosum+=magic[i][ctrlj];
	}	
	if(garosum!=garo)
	{
		printf("-1");
		return 0;
	}
	if(sarosum!=saro)
	{
		printf("-1");
		return 0;
	}
	printf("%d",garo-garosum);
} 
