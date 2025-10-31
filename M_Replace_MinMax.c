#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int arr[100001];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int min = arr[0], minIndex = 0;
    int max = arr[0], maxIndex = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            minIndex = i;
        }
        if (arr[i] > max)
        {
            max = arr[i];
            maxIndex = i;
        }
    }

    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}