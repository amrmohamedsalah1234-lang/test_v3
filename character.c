#include <stdio.h>
#include <ctype.h>   // For isalpha()

int main() {
    char ch;
    
    printf("Enter a single character: ");

    // Read exactly one character safely
    if (scanf(" %c", &ch) !=1 ) {
        printf("Invalid input.\n");
        return 1;
    }

    // Check if the input is alphabet
    if (isalpha((unsigned char)ch)) {
        printf("'%c' is an alphabet.\n", ch);
    } else {
        printf("'%c' is NOT an alphabet.\n", ch);
    }

    return 0;
}