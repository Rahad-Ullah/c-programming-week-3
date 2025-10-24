#include <stdio.h>
#include <stdbool.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", &a, &b);

    // lexicographical comparison by builtin function
    int result = strcmp(a, b);
    if (result == 0)
    {
        printf("Equal");
    }
    else if (result < 0)
    {
        printf("A is smaller");
    }
    else
    {
        printf("B is smaller");
    }

    return 0;
}