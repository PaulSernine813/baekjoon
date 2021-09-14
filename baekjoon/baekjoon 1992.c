#include<stdio.h>
int board[65][65];
void solve(int y,int x,int sz)
{
    int flag=0;
    for(int i=0;i<sz;i++)
    {
        for(int j=0;j<sz;j++)
        {
            if(board[y][x]!=board[y+i][x+j]){
                flag=1;
                break;
            }
        }
    }
    if(!flag)
        printf("%d",board[y][x]);
    else
    {
        printf("(");
        solve(y,x,sz/2);
        solve(y,x + sz/2, sz/2);
        solve(y +sz/2, x, sz/2);
        solve(y + sz/2, x+sz/2, sz/2);
        printf(")");
    }


}
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(int j=0;j<n;j++)
        {
            scanf("%d",board[i][j]);
        }
    }

    solve(0,0,n);

}
