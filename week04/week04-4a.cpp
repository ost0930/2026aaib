//week04-4a.cpp_SOIT107_BASE_004
#include <stdio.h>

int main()
{
     int n;
     scanf("%d",&n);
     int a = 0;
     if(n <= 2000) a=100;
     else {
         a=100+(n-2000)/500 * 5;
         if(n%500>0) a += 5;
     }
     printf("%d\n",a);
}
