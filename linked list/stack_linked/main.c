#include <stdio.h>
#include <stdlib.h>

#define type int //your data type of stack [char int ...]

typedef struct stackNode{
    type data;
    struct stackNode *next ;
}stackNode;

typedef struct Stack{
    stackNode *top;
}Stack;

void initStack(Stack *pt){
    pt->top = NULL;
}

void push(type element,Stack *pt){
    stackNode *pn = (stackNode*) malloc(sizeof(stackNode));
    pn->data=element;
    pn->next=pt->top;
    pt->top=pn;
}

type pop(Stack *pt){
    type pop = pt->top->data;
    stackNode *temp = pt->top;
    pt->top=pt->top->next;
    free(temp);
    return pop;

}

int isFull(Stack *pt){
    return 0;
}

int isEmpty(Stack *pt){
    return pt->top==NULL;
}

void clearStack(Stack *pt){
    stackNode *pn = pt->top;
    while (pn){
        pn= pn->next;
        free(pt->top);
        pt->top = pn;
    }
}
void display(Stack *pt){
    Stack *temp = pt->top;
    while (pt->top != NULL){
        printf("%d\n",pt->top->data);
        pt->top=pt->top->next;
    }
    pt->top=temp;
}

int main() {
    printf("Hello, World!\n");
    Stack s;
    initStack(&s);

    push(1,&s);
    push(2,&s);
    push(3,&s);
    push(4,&s);
    printf("Display all elements of stack\n");
    display(&s);

    printf("================================\n");
    printf("================================\n");

    int last = pop(&s);
    printf("last input to stack: %d\n",last);
    display(&s);

    return 0;
}
