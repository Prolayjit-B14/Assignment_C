#include <stdio.h>
int main() {
    int r, c, i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d%d", &r, &c);

    int a[r][c], b[r][c], sum[r][c];

    printf("Enter elements for 1st matrix:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements for 2nd matrix:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &b[i][j]);

    printf("Sum of the two matrices:\n");
    for(i = 0; i < r; i++, printf("\n"))
        for(j = 0; j < c; j++)
            printf("%d ", a[i][j] + b[i][j]);

    return 0;
}