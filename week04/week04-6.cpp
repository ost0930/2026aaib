//week04-6.cpp SOIT106_BASE_
#include <stdio.h>
int main()
{
     int n;
     scanf("%d",&n);
     int a=0,now;
     for(int i=0;i<n;i++){
        scanf("%d",&now);
        a+=now;
     }
     printf("%d\n",a);
}
