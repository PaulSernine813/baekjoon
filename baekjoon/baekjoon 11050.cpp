#include<bits/stdc++.h>

using namespace std;

int fac(int num)
{
	if(num==0) return 1;
	int result=1;
	for(int i=num;i>=1;i--)
	{
		result*=i;
	}
	return result;
}
int main()
{
	int n,k;
	cin >> n >> k;
 	cout << fac(n) / (fac(k) * fac(n-k));
}
