#include <stdio.h>

int __attribute__((__cdecl__)) getMaxFromTwo(int a, int b)
{
    return a > b ? a : b;
}

int __attribute__((__cdecl__)) getMaxNumFromFour(int a, int b, int c, int d)
{
    int max;
    max = getMaxFromTwo(a, b);
    max = getMaxFromTwo(max, c);
    max = getMaxFromTwo(max, d);
    return max;
}

int main()
{
    int data1, data2, data3, data4, maxNum;
    puts("Please input four numbers: ");
    scanf("%d%d%d%d", &data1, &data2, &data3, &data4);

    maxNum = getMaxNumFromFour(data1, data2, data3, data4);

    printf("The biggest nums: %d", maxNum);

}
