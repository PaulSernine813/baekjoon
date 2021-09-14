#include<stdio.h>
int pw[16];
int solve(int y,int x,int dy,int dx, int n, int ans)
{
    if(n == 0) return ans;
    int t = pw[n-1];
    if(dx < t)
    {
        if(dy < t) return solve(y, x, dy, dx, n-1, ans);
        else return solve(y+t, x, dy-t, dx, n-1, ans + 2*t*t);
    }
    else
    {
        if(dy < t) return solve(y, x+t, dy, dx-t, n-1, ans + t*t);
        else return solve(y+t, x+t, dy-t, dx-t, n-1, ans + 3*t*t);
    }
}
int main()
{
    int n,r,c;
    scanf("%d %d %d",&n,&r,&c);
    pw[0]=1;
    for(int i=1;i<=15;i++)
        pw[i]=pw[i-1]*2;

    printf("%d", solve(0, 0, r, c, n, 0));


}
