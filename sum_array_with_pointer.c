#include<stdio.h>
int sum(int *a, int size){
    int i, result = 0;
    for(i = 0;i < size;i++){
        result += *(a + i);
    }
    return result;
}

int main(){
    int arr[5] = { 1, 2, 3, 4, 5 };
    int result = sum(arr, 5);
    printf("Sum of the array is: %d\n", result);
    return 0;
}