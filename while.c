#include <stdio.h>

int main() {
    //int num, i = 1;

//    printf("Enter a number: ");
  //  scanf("%d", &num);

    //printf("Multiplication Table of %d:\n", num);

    //while (i <= 10) {
      //  printf("%d x %d = %d\n", num, i, num * i);
        //i++;
    //}
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        num = num / 10;
        count++;
    }

    printf("Number of digits = %d\n", count);

    return 0;
}
