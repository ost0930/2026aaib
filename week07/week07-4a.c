//week07-4a.cpp SOIT107_BASE_007
#include <stdio.h>
int main()
{
     int n;
     scanf("%d",&n);
     int a1=n/10000;
     int a2=(n%10000)/1000;
     int a3=(n%1000)/100;
     int a4=(n%100)/10;
     int a5=(n%10);
     printf("%d   %d   %d   %d   %d",a1,a2,a3,a4,a5);
}
