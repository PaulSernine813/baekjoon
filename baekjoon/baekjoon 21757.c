#include<stdio.h>
int sum(int n, int k, int a[100001])
{
    int cnt=0,i;
    for(i=n;i<k;i++)
    {
        cnt+=a[i];
    }
    return cnt;
}
int main()
{
    int a[100001],n,i,cnt=0,cnt1=0,cnt2=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(sum(0,i,a)==sum(i+1,j,a))
            {
                for(int k=j+1;k<n;k++)
                {
                    if(sum(j+1,k,a)==sum(i+1,j,a))
                        cnt++;
                }
            }
        }
    }
    printf("%d",cnt);
}
