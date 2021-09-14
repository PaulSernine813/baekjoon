#include<bits/stdc++.h>

using namespace std;

int main()
{
	int right=1000000000,left=1,a[200001],n,c;
	scanf("%d %d",&n,&c);
	for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
	sort(a,a+n);
	while(right-left>1)
	{
		int mid=(left+right)/2;
		int past=a[0],cnt=1;
		for(int i=1;i <n;i++)
		{
			if(a[i]-past>=mid)
			{
				past=a[i];
				cnt++;
			}
		}
		if(cnt<c)
			right = mid;
		else
			left= mid;
	}
	printf("%d",left);	
}
