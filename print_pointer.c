#include<stdio.h>
int main(){
    int num = 10;
    int *ptr = &num;
    
    printf("num = %d\n", num);
    printf("Pointer of num = %p\n", &num);
    
    printf("num = %d\n", *ptr);
    printf("Pointer of num = %p\n", ptr);
    
    int x = 20, y = 50, sum;
    
    int *ptrX = &x, *ptrY = &y;
    
    sum = *ptrX + *ptrY;
    
    printf("Sum of x + y = %d\n", sum);
    
    return 0;
}