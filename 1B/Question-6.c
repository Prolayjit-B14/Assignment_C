// Simple Interest
#include <stdio.h>

int main() {
    float principal, rate, time, I;

    printf("Enter principal, rate, and time: ");
    scanf("%f %f %f", &principal, &rate, &time);

    I = (principal * rate * time) / 100;

    printf("Simple Interest = %.2f\n", I);

    return 0;
}
