#include <stdio.h>
int main()
{
    char str[101];

    scanf("%s", str);

    int length = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }

    printf("%d", length);

    return 0;
}