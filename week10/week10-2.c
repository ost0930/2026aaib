///week10-2.cpp 另外一種排序法
///今天教 Selecvion Sort 選擇排序法
#include <stdio.h>
int main()
{
    int a[10]={9,8,7,6,5,4,3,2,1,0};
    for(int k=0;k<10;k++) printf("%d ",a[k]);
    printf("\n");///這兩行負責印陣列裡的數字

    for(int i=0;i<10;i++){///左邊i
        for(int j=i+1;j<10;j++){///右邊j
            if(a[i]>a[j]){///大小不對再交換
                int temp=a[i];
                 a[i]=a[j];
                 a[j]=temp;
            }
        }
        for(int k=0;k<10;k++) printf("%d ",a[k]);
        printf("\n");
    }
}

