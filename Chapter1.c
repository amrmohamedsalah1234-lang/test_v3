#include<stdio.h>
int main(){
    float floatsize;
    double doublesize;
    int intseize;
    long int longintsize;
    char charsize;
    long double longdoublesize;

printf("%zu", sizeof(floatsize));
printf("\n%zu", sizeof(doublesize));
printf("\n%zu", sizeof(intseize));
printf("\n%zu", sizeof(charsize));
printf("\n%zu", sizeof(longintsize));
printf("\n%zu", sizeof(longdoublesize));

    return 0;
}