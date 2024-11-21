/*
1.輸入2個整數(x,y)，求兩數的平方和(x*x+y*y)並輸出。

2.輸入一個圓半徑（r）當r>＝0時，計算並輸出圓的面積(pi *r*r )和周長(2*pi*r) pi = 3.14，否則，輸出提示資訊。

*/
#include <stdio.h>

int main()
{
    int x,y;
    
    printf("please input int x=");
    scanf("%d",&x);
    printf("please input int y=");
    scanf("%d",&y);
    printf("x*x+y*y = %d\n",x*x+y*y); 

    return 0;
}
