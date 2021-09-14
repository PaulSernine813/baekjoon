#include<stdio.h>
int pw[16];
int solve(int y,int x,int dy,int dx,int n,int cnt)
{
    if(n==0) return cnt;
    int t=pw[n-1];
    if(dy<t)
    {
        if(dx<t)
            return solve(y,x,dy,dx,n-1,cnt);
        else
            return solve(y,x+t,dy,dx-t,n-1,cnt+t*t);
    }
    else
    {
        if(dx<t)
            return solve(y+t,x,dy-t,dx,n-1,cnt+2*t*t);
        else
            return solve(y+t,x+t,dy-t,dx-t,n-1,cnt + 3*t*t);
    }

}
int main()
{
    int n,r,c;
    scanf("%d %d %d",&n,&r,&c);
    pw[0]=1;
    for(int i=1;i<16;i++)
        pw[i]=pw[i-1]*2;
    printf("%d",solve(0,0,r,c,n,0));
}
