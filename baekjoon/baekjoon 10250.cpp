#include<bits/stdc++.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int roomnumber,h,w,n;
		scanf("%d %d %d",&h,&w,&n);
		if(n%h!=0){
			roomnumber=n%h*100+n/h+1;
		printf("%d\n",roomnumber);
	}
		else{
			roomnumber=h*100+n/h;
			printf("%d\n",roomnumber);
		}
	}
}
