#include<bits/stdc++.h>
int main()
{
	while(1)
	{
		char n[6],flag=1;
		scanf("%s",&n);
		if(n[0]=='0')
			break;
		for(int i=0;i<strlen(n)/2;i++)
		{
			if(n[i]!=n[strlen(n)-i-1]){
				flag=0;
				break;
			}
		}
		if(flag==1)
			printf("yes\n");
		else
			printf("no\n");
	}
}
