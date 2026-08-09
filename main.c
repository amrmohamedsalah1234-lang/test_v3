#include<stdio.h>
int main(){
	char x;
	printf("Please enter a value for x:");
	scanf(" %c", &x);
	//printf("Please enter a value for b:");
	//scanf("%d", &b);
	//printf("Please enter a value for c:");
	//scanf("%d", &c);
	if(x>'a'&&x<'z'){
		printf("This is an alphabet");
	} else {
		printf("This is not an alphabet");
	}
	return 0;
	}
	
