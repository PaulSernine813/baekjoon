#include<bits/stdc++.h>
int main()
{
	int sum=0,arr[10]={0},a,b,c,imsi;
	scanf("%d %d %d",&a,&b,&c);
	sum=a*b*c;
	while(sum>0)
	{
		imsi=sum%10;
		sum/=10;
		switch(imsi){
			case 0:
				arr[0]++;
				break;
			case 1:
				arr[1]++;
				break;
			case 2:
				arr[2]++;
				break;
			case 3:
				arr[3]++;
				break;
			case 4:
				arr[4]++;
				break;
			case 5:
				arr[5]++;
				break;
			case 6:
				arr[6]++;
				break;
			case 7:
				arr[7]++;
				break;
			case 8:
				arr[8]++;
				break;
			case 9:
				arr[9]++;
				break;
		}
	
	}for(int i=0;i<10;i++)
		printf("%d\n",arr[i]);
}
