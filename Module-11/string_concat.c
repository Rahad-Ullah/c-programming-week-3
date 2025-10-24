#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", &a, &b);

    int len_a = strlen(a);
    int len_b = strlen(b);

    for (int i = 0; i <= len_b; i++)
    {
        a[len_a + i] = b[i];
    }
    printf("%s %s", a, b);

    return 0;
}