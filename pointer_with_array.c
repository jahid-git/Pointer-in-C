#include<stdio.h>
int main(){
    int a[5] = { 1, 2, 3, 4, 5 };
    int i, sum;
    for(i = 0;i < 5;i++){
        sum += *(a + i);
    }
    printf("Sum is : %d\n", sum);
    return 0;
}