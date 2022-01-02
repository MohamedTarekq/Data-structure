#include <stdio.h>

#define Max 10
#define type int

typedef struct stack{
    type elements[Max];
    int top ;
}Stack;

void initStack(Stack *pt){
    pt->top = -1;
}

int isFull(Stack *pt){
    if (pt->top == Max-1){ return 1;}
    else { return 0;}
}
int isEmpty(Stack *pt){
    if (pt->top == -1){ return 1;}
    else { return 0;}
}
int push(type element,Stack *pt){
    if (!isFull(pt)){
        pt->top++;
        pt->elements[pt->top]=element;
        return 1;
    }else { return 0; }
}

type pop(Stack *pt){
    if (!isEmpty(pt)){
        type value = pt->elements[pt->top];
        pt->top--;
        return value;
    }else { return 0; }
}

void display(Stack *pt){
    if (!isEmpty(pt)){
        int temp = pt->top;
        for(int i= pt->top;i>=0;i--){
//            printf("%d\n",i);
            printf("%d\n",pt->elements[pt->top--]);
        }
        pt->top = temp;
    }

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
