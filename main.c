#include <stdlib.h>
#include <stdio.h>

struct node {
    int value;
    struct node *next;
};
struct head {
    int length;
    struct node * first;
};

struct head * headNode;
struct node * temp;

struct node * CreateNode(int val){
    struct node * link = (struct node*)malloc(sizeof(struct node));
    link->value = val;
    link->next = NULL;
    return link;
}

void push(int val){
    struct node * link = CreateNode(val);
    link->next = headNode->first;
    headNode->first = link;
    headNode->length +=1;
}
void pop(){
    temp = headNode->first;
    headNode->first = temp->next;
    free(temp);
    headNode->length -= 1;
}

void Print(){
    temp = headNode->first;
    while (temp != NULL){
        printf("%d ", temp->value);
        temp = temp->next;
    }
    printf("\n");
}


int main(){
    headNode = (struct head*)malloc( sizeof(struct head));
    int length = 0;
    headNode->first = NULL;
    headNode->length = length;

    push(10);
    Print();
    push(40);
    Print();
    push(50);
    Print();
    push(20);
    Print();
    pop();
    Print();
}