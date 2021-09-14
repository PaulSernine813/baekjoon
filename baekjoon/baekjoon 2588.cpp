#include<bits/stdc++.h>

using namespace std;

int main()
{
	int three,four,five,six,a,b;
	cin >> a >> b;
	three=b%10*a;
	four=b/10%10*a;
	five=b/100*a;
	six=a*b;
	cout << three << endl << four << endl << five << endl << six;
}
