#include<stdio.h>
int main()
{
    int n,cntr=0,cntb=0,rl=0,rr=0,bl=0,br=0,min=500001;//R left,R right B left, B right의 약자 rl,rr,bl,br
    char a[500001];
    scanf("%d",&n);
    scanf("%s",&a);
    for(int i=0;i<n;i++)
    {
      if(a[i]=='R')
        cntr++;
      else if(a[i]=='B')
        cntb++;
    }
    for(int i=0;i<n;i++)//왼쪽에 있는 R의수!
    {
        if(a[i]=='R')
            rl++;
        else
            break;
    }
    if(min>cntr-rl)
        min=cntr-rl;
    for(int i=n-1;i>=0;i--)//오른쪽에 있는 R의수!
    {
        if(a[i]=='R')
            rr++;
        else
            break;
    }
    if(min>cntr-rr)
        min=cntr-rr;
    for(int i=0;i<n;i++)//왼쪽에 있는 B의수!
    {
        if(a[i]=='B')
            bl++;
        else
            break;
    }
    if(min>cntb-bl)
        min=cntb-bl;
    for(int i=n-1;i>=0;i++)
    {
        if(a[i]=='B')
            br++;
        else
            break;
    }
    if(min>cntb-br)
        min=cntb-br;
    printf("%d",min);
}
