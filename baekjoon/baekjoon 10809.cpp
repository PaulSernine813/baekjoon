#include<bits/stdc++.h>
int main()
{
	int n[30];
	char s[101];
	memset(n,-1,sizeof(n));
	scanf("%s",s);
	
	for(int i=strlen(s)-1;i>=0;i--)
		n[s[i]-'a']=i;
	
	for(int i=0;i<26;i++)
		printf("%d ",n[i]);
}	


//a=97 b=98
//1 0 -1 -1 2 -1 -1 -1 -1 4 3 -1 -1 7 5 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1
