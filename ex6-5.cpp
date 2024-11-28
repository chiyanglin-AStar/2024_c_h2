/*

2.輸入一個圓半徑（r）當r>＝0時，計算並輸出圓的面積(pi *r*r )和周長(2*pi*r) pi = 3.14，否則，輸出提示資訊。


6. 鍵盤輸入，輸入 2 個數，再輸入 兩數之和，如果正確，顯示“right”，否則顯示“error”

*/
#include <iostream>

int main()
{
    int r;
    printf("please input 圓半徑: ");
    scanf("%d",&r);
    
    if(r>=0){
        printf("圓的面積 = %f",3.14*r*r);
        printf("圓的周長 = %f",2*3.14*r);
    }else{
        printf("r < 0 is wrong ");
    }
    
    
    return 0;
}
