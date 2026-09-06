#include<stdio.h>
int main(){
int x=25, number1;
    while (1){
        printf("Guess the number between (1-50):");
        scanf("%d", &number1);
   
    if (number1 == x)
    {
        printf("Your answer is correct");
        break;
    }
    else if (number1 > x)
    {
        printf("try a smaller number\n");
    }
    else if (number1 < x)
    {
          printf("try a greater number\n");
    }  
}
return 0;
}



