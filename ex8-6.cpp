#include <stdio.h>
void print_array(int a[]){
    int i;
    for(i=0;i<3;i++){
        printf("a[%d]=%d\n",i,a[i]);
    }
}

int main()
{
    int i,a[3];
    
    for(i=0;i<3;i++){
        a[i]=i+7;
    }
    print_array(a);

    return 0;
}
