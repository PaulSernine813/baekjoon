#include<bits/stdc++.h>

using namespace std;

int main()
{
	int k,n,s,g,room=0,a[7][1];
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++)
	{
		cin >> s;
		cin >> g;
		a[g][s]++;
	}
	if((a[1][1]+a[1][0]+a[2][0]+a[2][1])%k!=0)
		room+=(a[1][1]+a[1][0]+a[2][0]+a[2][1])/k+1;
	else
		room+=(a[1][1]+a[1][0]+a[2][0]+a[2][1])/k+1;
		
	if((a[3][1]+a[4][1])%k!=0)
		room+=(a[3][1]+a[4][1])/k+1;
	else
		room+=(a[3][1]+a[4][1])/k;
		
	if((a[3][0]+a[4][0])%k!=0)
		room+=(a[3][0]+a[4][0])/2+1;
	else
		room+=(a[3][0]+a[4][0])/2;
		
	if((a[6][1]+a[5][1])%2!=0)
		room+=(a[5][1]+a[6][1])/2+1;
	else
		room+=(a[5][1]+a[6][1])/2;
		
	if((a[5][0]+a[6][0])%2!=0)
		room+=(a[5][0]+a[6][0])/2+1;
	else
		room+=(a[5][0]+a[6][0])/2;
	printf("%d",room);
}
