#include <stdio.h>

int sum(int* arr, int len, int col) {
    int i, j, sum;
    sum = 0;
    for (i = 0; i < len; i++) {
        for (j = 0; j < col; j++) {
            sum += *(arr + i * col + j);
        }
    }
    return sum;
}

int main()
{
    int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };

    printf("总分数为：%d, %d, %d", sum(*arr, 3, 3), arr[1][1], arr[0][4]);

    return 0;
}
