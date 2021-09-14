#include<bits/stdc++.h>
using namespace std;
int main()
{
 	int t;
 	cin >> t;
 	while(t--)
 	{
 		int r;
		char a[22];
		cin >> r >> a;
		for(int i=0;i<strlen(a);i++)
		{
			for(int j=0;j<r;j++)
			{
				cout << a[i];
			}
		}
		printf("\n");
	}
}
