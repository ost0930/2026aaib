///week09-4.cpp 要交換陣列裡的數字
#include <stdio.h>
int main()
{
     int a=99,b=34;
     printf(" 一開始a:%d b:%d\n",a,b);
     int temp = a; ///temp開始為空，temp接a
     a=b;///a接b
     b=temp;///b接temp
     printf("交換後a:%d b:%d\n",a,b);
}
