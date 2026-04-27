//week10-3.cpp 泡泡排序法
#include <stdio.h>
int main()
{
    int a[10] = {0,1,2,3,4,5,6,7,8,9};///陣列宣告

    for(int i-0;i<10; i++) { ///逐一印出
        ("%"[i]); ///空格隔開
    }
    printf("\n"); ///跳行

    for(int i=0;i<10-1;i++) {///小心有10-1的1
        if(a[i]<a[i+1]){ ///如果大小不對
           int temp=a[i]; ///就交換
           a[i]=a[i+1];
           a[i+]=temp;
        }
    }
    for(int i=0;i<10;i++){ ///逐一印出for回圈印陣列
        printf("%d",a[i]);
    }
    printf("\n"); ///跳行
}
