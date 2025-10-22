#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n + 1]; // Create an array of size n+1 to accommodate the new element
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); // Read n elements into the array
    }
    int idx, value;
    scanf("%d %d", &idx, &value); // Read the index and value to be inserted

    for (int i = n; i > idx; i--)
    {
        arr[i] = arr[i - 1]; // Shift elements to the right to make space for the new element
    }

    arr[idx] = value; // Insert the new value at the specified index

    // printf("Modified array: ");
    // for (int i = 0; i <= n; i++)
    // {
    //     printf("%d ", arr[i]);
    // }

    return 0;
}