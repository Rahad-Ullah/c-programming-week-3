#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int output[100001] = {0};

    for (int i = 0; i < n; i++)
    {
        output[arr[i]]++;
    }

    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", output[i]);
    }

    return 0;
}