//week04-4b.cpp SOIT107_BASE_002
#include <stdio.h>
int main()
{
     int n;
     scanf("%d",&n);
     int ans = 100;
     if(n>1500){
        ans += (n-1500)/250 * 5;
        if (n%250>0) ans+=5;
     }
     printf("%d",ans);
}
