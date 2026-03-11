/* Insertion Sort
It starts at the second element, comparing it to the ones before it in the already sorted section. If the current element is smaller, it shifts the larger elements to the right to make room, and then inserts the current element into its correct position.
*/
#include <stdio.h>

int main()
{
    int arr[5] = {5, 2, 9, 1, 3};
    int n = 5;
    int i, j, key;

    for(i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while(j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }

    printf("Sorted array:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
