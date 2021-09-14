#include<bits/stdc++.h>
int main()
{
	int t,acnt=0,bcnt=0,ccnt=0,mone=0;
	scanf("%d",&t);
		if(t%10!=0)
			printf("-1");
		else{
			acnt=t/300;
			t%=300;
			
			bcnt=t/60;
			t%=60;

			ccnt=t/10;
			t%=10;
			
			printf("%d %d %d",acnt,bcnt,ccnt);
	}
}
