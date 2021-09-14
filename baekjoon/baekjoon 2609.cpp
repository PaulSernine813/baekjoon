#include<bits/stdc++.h>

using namespace std;

int max(int a,int b)
{
	if(a>b) return a;
	return b;	
}

int gcd(int a,int b)
{
	for(int i=max(a,b);i>=1;i--)
	{
		if(a%i==0 && b%i==0)
			return i;
	}
}

int lcm(int a,int b)
{
	int num=max(a,b);
	while(1)
	{
		if(num%a==0 && num%b==0)
			return num;
		else
			num++;
	}
}

int main()
{
	int a,b;
	cin >> a >> b;
	cout << gcd(a,b) << endl << lcm(a,b) ;
}
