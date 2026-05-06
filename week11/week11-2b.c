//week11-2b.cpp SOIT106_ADVANCE-001
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ans = 0;
    while(n>0){
        ans=ans*10+n%10;
        n=n/10;
    }
    printf("%d+%d=%d\n",n,ans,ans+n);
}
