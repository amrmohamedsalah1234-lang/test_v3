#include<stdio.h>
#define SQR(x) (x*x)

enum nature {
    tree,
    forest,
    birds,
    ANIMALS,
    bugs,
};

int main(){
printf("%d", sizeof(enum nature));

return 0;
}