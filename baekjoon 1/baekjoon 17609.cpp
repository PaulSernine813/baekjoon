#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
char a[100003];
int solve(int left,int right,int cnt)//최소휫수 버리는 최소횟수
{
    if(left>=right || cnt>=2)
        return cnt;
    if(a[left]==a[right])
        return solve(left+1,right-1,cnt);
    return min(solve(left+1,right,cnt+1),solve(left,right-1,cnt+1));
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",&a);
        int n=strlen(a);
        printf("%d\n",solve(0,n-1,0));
    }
}
