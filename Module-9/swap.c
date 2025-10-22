#include <stdio.h>
int main()
{
    int a = 10;
    int b = 20;

    printf("Before Swap: a = %d, b = %d\n", a, b);

    int temp = a;
    a = b;
    b = temp;

    printf("After Swap: a = %d, b = %d\n", a, b);

    return 0;
}