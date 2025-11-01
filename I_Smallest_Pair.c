#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        int sum = arr[1] + arr[2] + 2 - 1;
        for (int i = 1; i < n; i++)
        {

            for (int j = i + 2; j < n; j++)
            {
                int result = arr[i] + arr[j] + j - i;
                if (result < sum)
                {
                    sum = result;
                }
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}