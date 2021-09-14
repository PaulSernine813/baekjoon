#include<bits/stdc++.h>
int main()
{
	int n,sum=0;
	char a[101];
	std :: cin >> n;
	std :: cin >> a;
	for(int i=0;i<n;i++)
	{
		sum+=a[i]-'0';
	}
	std :: cout << sum;
}
