#include<stdio.h>
#include<math.h>
void greet(){
    printf("Hello. How are you?");
}
void addnumbers(int n1, int n2){
int sum;
sum = n1 + n2;
printf("sum = %d", sum);
}
void multiplynum(int x, int y){
    int result;
    result = x * y;
    printf("\nresult = %d", result);
}
void powernum(double z, double h){
double power;
power = pow(z, h);
printf("\npower =%2lf", power);
}
int main(){
    int a,b;
    greet();
    printf("\nPlease enter 2 numbers:");
    scanf("%d%d", &a, &b);
    addnumbers(a,b);
    multiplynum(a,b);
    powernum(a,b);

    return 0;
}