#include<stdio.h>
bool visited[1003];
int adj[1003][1003],n;
void dfs(int cur)
{
    visited[cur]=true;
    printf("%d ",cur+1);
    for(int i=0;i<n;i++)
    {
        if(visited[i]==0&&adj[cur][i]==1)
        {
            dfs(i);
        }
    }
}
int main()
{
    int m,v;
    scanf("%d %d %d",&n,&m,&v);
    v--;
    for(int i=0;i<m;i++)
    {
        int a, b;
        scanf("%d %d",&a, &b);
        a--; b--;
        adj[a][b]=1;
        adj[b][a]=1;
    }
    dfs(v);
}
