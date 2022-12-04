#include <stdio.h>

int main() {
    int arr[3] ={1,2,3};
    int *p = arr;
    //printf("%d\t", *arr++); //常量指针不允许增加
    printf("%d\t", *p++);
    printf("%d\n", *p);
    printf("arr size:%d\n", sizeof(arr));
    printf("* p size:%d\n", sizeof(p));
    return 0;
}
