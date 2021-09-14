#include<stdio.h>
int main()
{
    int n,m,x,y,k,t,a[53][53];
    scanf("%d",&t);
    scanf("%d %d %d",&m,&n,&k);
    for(int i=0;i<k;i++)
    {
        scanf("%d %d",&x,&y);
        a[x][y]=1;
    }
}
