/* Selection Sort
 scans the unsorted part to find the smallest element, and then swaps with the first element of that unsorted section. 
*/
#include <stdio.h>

int main()
{
    int arr[5] = {5, 2, 9, 1, 3};
    int n = 5;
    int i, j, min, temp;

    for(i = 0; i < n-1; i++)
    {
        min = i;

        for(j = i+1; j < n; j++)
        {
            if(arr[j] < arr[min])
            {
                min = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    printf("Sorted array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
