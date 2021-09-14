#include<stdio.h>
#include <string.h>
int m,n;
int dy[4]={1,-1,0,0};
int dx[4]={0,0,1,-1};
int board[50][50]={0};
bool visited[50][50];
bool oob(int y,int x)
{
    return x<0 || x>=m || y<0 || y>=n;
}
void dfs(int y,int x)
{
    visited[y][x]=true;
    for(int dir=0;dir<4;dir++)
    {
        int ny=y+dy[dir];
        int nx=x+dx[dir];
        if(oob(ny,nx)) continue;
        if(board[ny][nx] && !visited[ny][nx])
            dfs(ny,nx);
    }
}
int main()
{
    int TC,k,x,y,cnt=0;
    scanf("%d",&TC);
    while(TC--)
    {
        cnt=0, memset(visited,0,sizeof(visited)), memset(board,0,sizeof(board));
        scanf("%d %d %d",&m,&n,&k);
        while(k--)
        {
             scanf("%d %d",&x,&y);
             board[y][x]=1;
        }
        for(int i=0;i<n;i++) for(int j=0;j<m;j++){
            if(board[i][j] && !visited[i][j])
            {
                dfs(i,j);
                cnt++;
            }
        }
        printf("%d\n",cnt);
    }
}
