// Division

#include <stdio.h>

int main() {
    int a, b;
    float result;

    printf("Enter two numbers (numerator and denominator): ");
    scanf("%d %d", &a, &b);

    result = (float)a / b; // b != 0

    printf("Division = %.2f\n", result);

    return 0;
}
