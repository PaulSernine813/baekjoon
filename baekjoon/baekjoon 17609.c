#include<stdio.h>
#include<string.h>
char a[1003];
int solve(int left, int right)//
{
    if(left>=right)
        return 1;
    return (a[left]==a[right])&&solve(left+1,right-1);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",&a);
        int n=strlen(a);
        printf("%d",solve(0,n-1));
    }

}
