// Add two Array elements and store into a third Array

#include <stdio.h>
int main() {

        int a[5], b[5], c[5],i;
        printf("Enter 5 Elements of 1st Array:\n");
        for(i = 0; i < 5; i++) {
            scanf("%d", &a[i]);
        }

        printf("Enter 5 Elements of 2nd Array:\n");
        for(i = 0; i < 5; i++) {
            scanf("%d", &b[i]);
        }


        for(i = 0; i < 5; i++) {
            c[i] = a[i] + b[i];
        }

        printf("Sum of two Arrays:\n");
        for(i = 0; i < 5; i++) {
            printf("%d ", c[i]);
        }

    return 0;
}
