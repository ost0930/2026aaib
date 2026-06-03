//week15-5c.cpp SOIT108_Advance_014
#include <stdio.h>
int main()
{
     int n;
     scanf("%d",&n);
     int total=0;
     for(int i=0;i<=n;i++){
        total +=2*i+1;
     }
     printf("f(%d)=%d",n,total);
}
