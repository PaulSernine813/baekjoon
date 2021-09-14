#include<bits/stdc++.h>
int cnt=0;

int sq(int k)
{
	if(k==0) return 1;
	return 2*(k-1);
}
void hanoi(int k)
{
	//if(k==0) return cnt;
	
}

int main()
{
	int k;
	scanf("%d",&k);
	printf("%d",sq(k));
	//hanoi(k);
}
