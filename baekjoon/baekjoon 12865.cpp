#include<stdio.h>
#include<string.h>
int cache[100][100001];
int w[100],v[100];
int n,k;
int max(int a,int b)
{
    if(a<b)
        return b;
    else
        return a;
}
int pack(int idx,int weight)
{
    if(idx==n)
        return 0;
    int &ret=cache[idx][weight];
    if(ret!=-1)
        return ret;
    ret=pack(idx+1,weight);
    if(w[idx]<=weight)
        ret=max(ret,v[idx]+pack(idx+1,weight-w[idx]));
    return ret;
}
int main()
{
    scanf("%d %d",&n,&k);
    memset(cache,-1,sizeof(cache));
    for(int i=0;i<n;i++)
        scanf("%d %d",&w[i],&v[i]);
    printf("%d",pack(0,k));
}
