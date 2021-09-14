#include<bits/stdc++.h>
long long int pibo[82];
using namespace std;
int main()
{
	long long int ro;
	int n;
	cin >> n;
	pibo[0]=1;
	pibo[1]=1;
	for(int i=2;i<n;i++){
		pibo[i]=pibo[i-1]+pibo[i-2];
	}
	ro=pibo[n-1]*2+pibo[n-2];
	cout << ro*2;
}
