#include <stdio.h>

int main() {
    char ch;
    
    printf("Enter a character: ");
    scanf(" %c", &ch);
    
    switch (ch) {
        default:
            printf("ASCII value of '%c' is %d\n", ch, ch);
            break;
    }
    
    return 0;
}