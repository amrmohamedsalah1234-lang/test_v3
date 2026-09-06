#include<stdio.h>
int main(){
int n1, n2;
int result;
char operator;
    printf("Please Choose an operator:");
    scanf("%c", &operator);
    printf("Please enter a value of n1:");
    scanf("%d",&n1);
    printf("Please enter a value of n2:");
    scanf("%d",&n2);
    
    
    switch (operator)
    {
    case '+':
        printf("result = %d", n1+n2);
        break;
    case '-':
        printf("result = %d", n1-n2);
        break;
    case '*':
        printf("result = %d", n1*n2);
        break;
    case '/':
        printf("result = %d", n1/n2);
        break;
    default:
        printf("Please select the correct operator!");
        break;
    }
}