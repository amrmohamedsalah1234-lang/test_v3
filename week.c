#include<stdio.h>
int main(){
int a;
printf("Please enter a valid number:");
scanf("%d", &a);
switch (a)
{
case 0:
    puts("Saterday");
    break;
case 1:
    puts("Sunday");
    break;
case 2:
    puts("Monday");
    break;
case 3:
    puts("Tuesday");
    break;
case 4:
    puts("Wensday");
    break;
case 5:
    puts("Thursday");
    break;    
case 6:
    puts("Friday");
    break;
default:
    puts("Please enter a valid week day:");
    break;
}

}
