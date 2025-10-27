#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char str[10001];
        scanf("%s", &str);

        int small_count = 0, capital_count = 0, digit_count = 0;

        for (int i = 0; i < strlen(str); i++)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                small_count++;
            }
            else if (str[i] >= 'A' && str[i] <= 'Z')
            {
                capital_count++;
            }
            else if (str[i] >= '0' && str[i] <= '9')
            {
                digit_count++;
            }
        }

        printf("%d %d %d\n", capital_count, small_count, digit_count);
    }

    return 0;
}