#include<stdio.h>
#include<string.h>
int solve(char a[303],int len)
{
    int s=0;
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<len;j++)
        {
           if(a[i]==a[j])
           {
               s=i-j;
               if(s>1)
               {
                   if(a[j-1]!=a[j])
                        return 0;
               }
           }
        }
    }
    return 1;
}
int main()
{
    int cnt=0,n;
    char a[303];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s",&a);
        cnt+= solve(a,strlen(a));
    }
    printf("%d",cnt);
}
