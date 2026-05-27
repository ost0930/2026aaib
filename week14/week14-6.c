//week14-6.cpp SOIT108_Advance_014B
#include <stdio.h>
int main()
{
     int n;
     scanf("%d",&n);
     int zeros =1;
     while(n>0){
         printf("%d ",n%10*zeros);
         n=n/10;
         zeros=zeros*10;
     }
}
