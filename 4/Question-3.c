// Print the Array in Reverse Order

#include <stdio.h>

int main() {
    int a[5], i;
    printf("Enter 5 Array values:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }
    printf("The Array values are:\n");
    for(i = 4; i >= 0; i--) {
        printf("%d \n", a[i]);
    }

    return 0;
}
