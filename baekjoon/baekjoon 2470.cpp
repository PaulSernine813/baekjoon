#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,a[100001],small,big,strt=0,v1,v2;
	scanf("%d",&n);
	long long int min=10000000001;
	int end=n-1;
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	sort(a,a+n);
 	while(strt!=end)
 	{
 		if(min>=abs(a[strt]+a[end]))
 		{
 			v1=a[strt];
 			v2=a[end];
 			min=abs(a[strt]+a[end]);
		}
		if(a[strt]+a[end]>0)
			end--;
		else if(a[strt]+a[end]<=0)
			strt++;
	}
	printf("%d %d",v1,v2);
}
