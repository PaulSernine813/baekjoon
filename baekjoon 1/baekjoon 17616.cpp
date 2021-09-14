#include<stdio.h>
#include<vector>
#include<queue>
using namespace std;
vector<int> adj[2][100001];
int visit[100001];
int solve(int x, int type)
{
    visit[x] = 1;
    queue<int> q;
    int cnt=0;
    q.push(x);
    while(!q.empty()){
        int r = q.front();
        q.pop();
        for(int i=0;i<adj[type][r].size();i++){
            if(visit[adj[type][r][i]]==0){
                visit[adj[type][r][i]] = 1;
                q.push(adj[type][r][i]);
                cnt++;
            }
        }
    }
    return cnt;
}
int main()
{
    int i,n,m,x,p,q;
    scanf("%d %d %d",&n,&m,&x);

    for(i=0;i<m;i++){
        scanf("%d %d",&p,&q);
        adj[0][p].push_back(q);
        adj[1][q].push_back(p);
    }
    printf("%d %d",solve(x,1)+1,n-solve(x,0));
}
