#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin >> n;
	int cnt=1;
	long long range = 1;
	long long int tmp = 1;
	while(1)
	{
		if(range>=n)
			break;
		tmp = 6*(cnt++);
		range +=tmp;
	}
	cout << cnt;
}
