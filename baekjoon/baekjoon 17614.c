#include<stdio.h>
int main()
{
    int i,n,cnt=0,a=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=i;
        while(a>0)
        {
            if(a%10==3 || a%10==6 || a%10==9)
                cnt++;
            a/=10;
        }
    }
    printf("%d",cnt);
}
