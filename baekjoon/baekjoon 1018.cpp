#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
  int n,m,cnt1=0,cnt2=0,ans=65;
	scanf("%d %d",&n,&m);
	char a[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j]; 
		}
	}
	for(int i=0;i<=n-8;i++)
	{
		for(int j=0;j<=m-8;j++)
		{
			 for(int y=0;y<8;y++)
			 {
				 for(int x=0;x<8;x++)
				 {
					 if((x+y)%2==0 && a[i+y][j+x]!='W')
						cnt1++;
						if((x+y)%2==1 && a[i+y][j+x]!='B')
						cnt1++;
				 }
			 }
			 	ans=min(ans,cnt1);
				ans=min(ans,64-cnt1);
				cnt1=0;
		}
	}
	cout << ans;
}
