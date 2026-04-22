///week09-6.cpp 重複 week09-5 做很多次 泡泡排序法 bubble sort
#include <stdio.h>
int main()
{
     int a[10]={11,22,33,44,55,66,77,88,99,97};

     for(int i=0;i<10;i++) printf("%d ",a[i]);
     printf("\n");

     for(int k=0;k<10-1;k++){
        for(int i=0;i<10-1;i++){
           if( a[i] < a[i+1]) {///希望左大、右小，但現在反過來
              int temp = a[i];///就交換
              a[i]=a[i+1];
              a[i+1]=temp;
           }
        }

      ///最小的11移到最右邊
      for(int i=0;i<10;i++) printf("%d ",a[i]);
      printf("\n");
    }
}
