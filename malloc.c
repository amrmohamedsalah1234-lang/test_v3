#include<stdlib.h>
#include<stdio.h>
struct node {
    int data;
    struct node *next;
};
int main(){
    struct node * head;
    struct node * n1 = (struct node*)malloc(sizeof(struct node));
    struct node * n2 = (struct node*)malloc(sizeof(struct node));
    struct node * n3 = (struct node*)malloc(sizeof(struct node));
    head = n1;
    n1->next=n2;
    n2->next=n3;
    n3->next=NULL;
    n1->data=1;
    n2->data=2;
    n3->data=3;

    while (head != NULL)
    {
        printf("%d -->",head->data);
        head = head->next;
    }
    puts("NULL");
    return 0;
}