#include<stdio.h>
int a[5001];
void solve(int n)
{
    int imsi;
    for(int i=0;i<n;i++)
    {
        for(int j=1+i;j<n;j++)
        {
            if(a[i]<a[j])
            {
                imsi=a[i];
                a[i]=a[j];
                a[j]=imsi;
            }
        }
    }
}
int main()
{
    int n,k,sum=0;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    solve(n);
    for(int i=0;i<k;i++)
        sum+=a[i];
    printf("%d",sum-(k-1) * k / 2);
}
