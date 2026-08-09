#include <stdio.h>

int main() {
    int numbers[100];
    int size, i, j, temp;

    printf("How many numbers? ");
    scanf("%d", &size);

    printf("Enter %d numbers:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }

    // Sort from smallest to largest
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    printf("Sorted array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}