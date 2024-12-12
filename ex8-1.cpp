#include <iostream>
int area(int a,int b){    
    return a*b;
}

int main()
{
    int a,b;
    printf("please input int a:");
    scanf("%d",&a);
    printf("please input int b:");
    scanf("%d",&b);
    printf("area value = %d",area(a,b));
    return 0;
}
