#include <stdio.h>
int main() {
    int r, c, i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d%d", &r, &c);

    int a[r][c], transpose[c][r];

    printf("Enter elements of %d x %d matrix:\n", r, c);
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            transpose[j][i] = a[i][j];

    printf("Transpose of the matrix (%dx%d):\n", c, r);
    for(i = 0; i < c; i++, printf("\n"))
        for(j = 0; j < r; j++)
            printf("%d ", transpose[i][j]);

    return 0;
}