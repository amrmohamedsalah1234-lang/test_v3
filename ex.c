#include <stdio.h>
struct Car
{
    char name[50];
    int price;
    char color[50];
    char Model[50];
};
int main(){
     struct Car car_info[1];
    int i;

    for (i = 0; i < 1; i++) {
        printf("\nCar_Info %d\n", i + 1);

        printf("Name: ");
        scanf(" %49[^\n]", car_info[i].name);

        printf("Price: ");
        scanf("%d", &car_info[i].price);

        printf("Color: ");
        scanf(" %49[^\n]", car_info[i].color);
        
        printf("Model: ");
        scanf("%49[^\n]", &car_info[i].Model);
    }

    printf("\n--- Car_Info ---\n");

    for (i = 0; i < 1; i++) {
        printf("Name: %s\n", car_info[i].name);
        printf("Price: %d\n", car_info[i].price);
        printf("Color: %s\n", car_info[i].color);
        printf("Model: %s\n", car_info[i].Model);
    }

    return 0;

}