#include <stdio.h>
int main()
{
    char str[4];
    for (int i = 0; i < 4; i++)
    {
        scanf("%c", &str[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("%c ", str[i]);
    }

    return 0;
}