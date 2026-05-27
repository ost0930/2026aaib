//week14-4b.cpp SOIT106_ADVANCE_007
#include <stdio.h>
int main()
{
     int n;
     scanf("%d",&n);
     int a=n/1000;
     int b=n/100%10;
     int c=n/10%10;
     int d=n%10;
     if(a==d&&b==c) printf("YES\n");
     else printf("NO\n");
}
