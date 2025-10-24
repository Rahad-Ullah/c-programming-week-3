#include <stdio.h>
int main()
{
    char str[1000001];
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\\'; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}