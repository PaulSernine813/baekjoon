#include<bits/stdc++.h>

using namespace std;

int max_house,pay[1001][4],t_pay[1001][4];
int f(int n,int c)
{
	if(n==max_house) return pay[n][c];
	
	if(t_pay[n][c]!=0)
		return t_pay[n][c];
	if(c==1)
	t_pay[n][c]=pay[n][c]+min(f(n+1,2),f(n+1,3));
	if(c==2)
	t_pay[n][c]=pay[n][c]+min(f(n+1,1),f(n+1,3));
	if(c==3)
	t_pay[n][c]=pay[n][c]+min(f(n+1,2),f(n+1,1));
	return t_pay[n][c];
}

int main()
{
	int n,min=100001;
	scanf("%d",&n);
	max_house=n;
	for(int i=1;i<=n;i++)
		scanf("%d %d %d",&pay[i][1],&pay[i][2],&pay[i][3]);
	for(int j=1;j<=3;j++)
	{
		if(min>f(1,j))
			min=f(1,j);
	}
	printf("%d",min);	
}
