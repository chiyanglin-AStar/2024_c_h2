/*
5. 編寫一個程式,從4 整數中找出最小的數,並顯示此數。

6. 鍵盤輸入，輸入 2 個數，再輸入 兩數之和，如果正確，顯示“right”，否則顯示“error”

8、從鍵盤輸入你和你朋友的年齡，編成判斷誰的年齡最大，並列印最大者的年齡。

*/
#include <stdio.h>

int main()
{
    int a,b;
    printf("please input int a =");
    scanf("%d",&a);
    printf("please input int b =");
    scanf("%d",&b);
    if(a > b){
        printf("a > b a = %d",a);
    }else if (a < b){
        printf("b > a b = %d ", b);
    }else{
        printf("a == b a==b == %d",a);
    }

    return 0;
}
