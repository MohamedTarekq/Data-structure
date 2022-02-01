#include <stdio.h>
#define Max 20
#define type int

typedef struct queue{
    int rear;
    int front;
    int size;
    type arr[Max];
}Queue;

void que_init(Queue *pt){
    pt->front=0;
    pt->size=0;
    pt->rear=-1;
}
void Enqueue(type data,Queue *pt){
    //WE CAN REMOVE THIS IF STATEMENT AND REBLACE IT WITH
    // pt->rear = (pt->rear +1) % Max;
    if(pt->rear == Max-1){
        pt->rear =0;
    }else{
        pt->rear++;
    }
    pt->arr[pt->rear] = data;
    pt->size++;
}

type Dequeue(Queue *pt){
    type front = pt->arr[pt->front];
    //WE CAN REMOVE THIS IF STATEMENT AND REBLACE IT WITH
    // pt->front = (pt->front +1) % Max;
    if(pt->front == Max-1){
        pt->front =0;
    }else{
        pt->front++;
    }
    pt->size--;
    return front;
}

int isEmpty(Queue *pt){
    return !pt->size;
}

int isFull(Queue *pt){
    return pt->size == Max;
}

int main() {
    printf("Hello, World!\n");
    Queue q;
    que_init(&q);
    Enqueue(1,&q);
    Enqueue(2,&q);
    Enqueue(3,&q);


    Queue *pq = &q;
    int temp = pq->front;
    for(int i=temp;i<=pq->rear;++i){
       type pop= Dequeue(pq);
       printf("%d\n",pop);
    }

    return 0;
}
