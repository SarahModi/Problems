#include <stdio.h>

int main()
{
    int a[3][3], b[3][3], c[3][3];
    int i, j, m, n;

    printf("Enter the order of the matrices: ");
    scanf("%d%d", &m, &n);

    printf("Enter the elements of A matrix:\n");
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("Enter the elements of B matrix:\n");
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &b[i][j]);

    /* Add matrices */
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            c[i][j] = a[i][j] + b[i][j];

    printf("Sum of matrices:\n");

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
            printf("%d\t", c[i][j]);
        printf("\n");
    }

    return 0;
}

/*
Output
Enter the order of the matrices: 2 2
Enter the elements of A matrix:
1 3
3 2
Enter the elements of B matrix:
7 8
9 0
Sum of matrices:
8	11	
12	2	
*/
