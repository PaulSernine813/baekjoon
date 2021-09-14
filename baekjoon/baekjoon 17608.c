#include<stdio.h>
int main()
{
    int n,a[100001],k=0,cnt=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]>k)
        {
            cnt++;
            k=a[i];
        }
    }
    printf("%d",cnt);
}
