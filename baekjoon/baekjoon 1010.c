#include<stdio.h>
int f(int n,int m)
{
    int a[30][30];

}
int main()
{
    int m,n,t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d %d",&n,&m);
        printf("%d",&f(n,m));
    }
}
