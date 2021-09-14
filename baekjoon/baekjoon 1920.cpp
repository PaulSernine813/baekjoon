#include<bits/stdc++.h>
int arr[100001];
using namespace std;
int solve(int st,int ed,int k)
{
	int mid=(st+ed)/2;
	if(st==ed)
	{
		if(arr[st]==k) return 1;
		else return 0;
	}
	if(arr[mid]<k)
		return solve(mid+1,ed,k);
	else
		return solve(st,mid,k);
}
int main()
{
	int n,m,imsi;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
		
	sort(arr,arr+n);
	
	scanf("%d",&m);
	
	for(int i=0;i<m;i++){
		scanf("%d",&imsi);
		printf("%d\n",solve(0,n-1,imsi));
	}
}
