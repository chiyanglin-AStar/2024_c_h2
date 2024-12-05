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
