#include <stdio.h>

void switch_sums(int* a, int* b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int a = 10;
    int b = 20;
    printf("交换前a = %d\tb = %d\n", a, b);
    switch_sums(&a, &b);
    printf("交换后a = %d\tb = %d\n", a, b);
    printf("分支切换测试");
    return 0;
}
