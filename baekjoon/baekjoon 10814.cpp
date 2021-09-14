#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	pair<int,string> a[100000],b;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i].first;
		cin>>a[i].second;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i].first>a[j].first)
			{
				b=a[i];
				a[i]=a[j];
				a[j]=b;
			}
		}
	}
	for(int i=0;i<n;i++)
		cout << a[i].first << " " << a[i].second << endl;
}
