#include<stdio.h>
#include<string.h>
int main() {
   int S[5];
   printf("Please enter the mark of S1:");
   scanf("%d", &S[0]);
   printf("Please enter the mark of S2:");
   scanf("%d", &S[1]);
   printf("Please enter the mark of S3:");
   scanf("%d", &S[2]);
   printf("Please enter the mark of S4:");
   scanf("%d", &S[3]);
   printf("Please enter the mark of S5:");
   scanf("%d", &S[4]);
   int a = S[0]+S[1]+S[2]+S[3]+S[4];
   printf("The total mark is:%d",a);
   int b = a/5;
   printf("\n The average mark is:%d ",b);
return 0;
}