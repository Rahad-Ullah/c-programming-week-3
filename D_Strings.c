#include <stdio.h>
#include <string.h>
int main()
{
    char str1[11], str2[11];
    scanf("%s %s", str1, str2);
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    printf("%d %d\n", len1, len2);
    printf("%s%s\n", str1, str2);

    char temp = str1[0];
    str1[0] = str2[0];
    str2[0] = temp;

    printf("%s %s", str1, str2);

    return 0;
}