#include <stdio.h>
int main()
{
    char str[1001];
    scanf("%s", str);

    int i = 0, j = strlen(str) - 1;

    while (i < j)
    {
        if (str[i] == str[j])
        {
            i++;
            j--;
            continue;
        }
        printf("NO");
        return 0;
    }
    printf("YES");
    return 0;
}