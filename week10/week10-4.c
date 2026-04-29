//week10-5.cpp SOIT106_ADVANCE_001
#include <stdio.h>
int main()
{
     int n;
     scanf("%d",&n);
     int ans=0,n2=n;
     while(n > 0){
         //printf("%d",n%10);
         ans=ans*10+n%10;
         //printf("n:%d ans:%d\n",n,ans);
         n=n/10;
     }
     printf("%d+%d=%d\n",n2,ans,n2+ans);
}
