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
    Stack stack;
    Stack *pt_satck;
    pt_satck = &stack;

    initStack(pt_satck);

    push(55,pt_satck);
    push(24,pt_satck);
    push(37,pt_satck);
    push(42,pt_satck);

    type last = pop(pt_satck);

    display(pt_satck);
    printf("%d\n",last);

    return 0;
}
