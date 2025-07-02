#include <stdio.h>
int main() {
    int r1, c1, r2, c2, i, j, k;
    printf("Enter rows and columns for Matrix A: ");
    scanf("%d%d", &r1, &c1);
    printf("Enter rows and columns for Matrix B: ");
    scanf("%d%d", &r2, &c2);

    if(c1 != r2) {
        printf("Matrix multiplication not possible.\n");
        return 1;
    }

    int a[r1][c1], b[r2][c2], c[r1][c2];

    printf("Enter elements for Matrix A:\n");
    for(i=0;i<r1;i++)
        for(j=0;j<c1;j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements for Matrix B:\n");
    for(i=0;i<r2;i++)
        for(j=0;j<c2;j++)
            scanf("%d", &b[i][j]);

    // Matrix multiplication
    for(i=0;i<r1;i++)
        for(j=0;j<c2;j++) {
            c[i][j]=0;
            for(k=0;k<c1;k++)
                c[i][j] += a[i][k]*b[k][j];
        }

    printf("Product Matrix (A x B):\n");
    for(i=0;i<r1;i++,printf("\n"))
        for(j=0;j<c2;j++)
            printf("%d ", c[i][j]);
    return 0;
}