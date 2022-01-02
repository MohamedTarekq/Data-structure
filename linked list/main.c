#include <stdio.h>
#include <malloc.h>

typedef struct Node {
    int data;
    struct Node *next;

}node;

//calculate the Length of linked list
int Length (node *head){
   int counter = 1;
   if (head == NULL){
       return 0;
   }
   node *temp = head;
   while (temp->next =! NULL){
       counter++;
       temp=temp->next;
       printf("%d",counter);

   }
   printf("%d",counter);
   return counter;
}

node * DeleteFirstNode(node *head){
   if (head == NULL){
       return NULL;
   }
   if (Length(head) == 1){
       free(head);
       return NULL;
   }else {
       node *secondNode;
       secondNode = head->next;
       free(head);
       return secondNode;
   }
}

node * Append(node *head, int data){
    node *newNode;
    newNode = (node *) malloc(sizeof(node));
    newNode->data = data;
    newNode->next = NULL;

    if ( head !=NULL){
        node *temp = head;
        while (temp->next != NULL){
            temp = temp->next;
        }
        temp->next=newNode;
        newNode->next=NULL;
    }else{
        head = newNode;
    }
    return newNode;
}

void printNodes(node *p){
    while (p != NULL){
        printf("%d\n",p->data);
        p = p->next;
        int a;
    }
}


int main() {
    printf("Hello, World!\n");
    node *head = NULL ;
//     node *newNode;
//     node *temp;

    head = Append(head,55);
    Append(head,77);
    Append(head,110);
    temp = head;
    printNodes(temp);

    return 0;
}
