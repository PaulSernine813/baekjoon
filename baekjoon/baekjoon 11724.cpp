#include<stdio.h>
int a[1003][1003],n;
bool visited[1003][1003];
void dfs(int u, int v)
{
    int i;
    if(!visited[u][v])
    {
        visited[u][v]=true;
        for(i=0;i<n;i++)
        {
            if(a[u][i+1] && !visited[u][i+1])
                 return dfs(i,u);
        }
    }
}
int main()
{
    int m,u,v,cnt=0;
    scanf("%d %d",&n,&m);
    for(int i=0;i<m;i++)
    {
        scanf("%d %d",&u,&v);
        a[u][v]=1;
        a[v][u]=1;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i+1][j+1] && !visited[i+1][j+1])
            {
                dfs(i,j);
                cnt++;
            }
        }
    }
    printf("%d",cnt);
}//m=50,000,000
