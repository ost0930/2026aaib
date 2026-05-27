//week14-5a.cpp SOIT108_Advance_009B
#include <stdio.h>
int main()
{
     int n;
     scanf("%d",&n);
     if(n<0) n=-n;
     int ans =0;
     while(n>0){
        ans= n%10;
        n = n/10;
     }
     printf("%d\n",ans);
}
