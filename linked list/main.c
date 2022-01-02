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
node * Append(node *head,int data){

    node *newNode,*temp;
    newNode = (node *) malloc(sizeof(node));
    newNode->data = data;
    newNode->next = NULL;
    if (head == NULL) {
        head = temp = newNode;
    } else {
        temp->next = newNode;
        head = temp = newNode;
    }
    return head;
}
node * appendFirst(node *head,int data){
   node *newNode = (node *) malloc(sizeof(node));
   newNode->data=data;
   newNode->next=head;
   head = newNode;
   return head;

}
void printNodes(node *p){
    while (p != NULL){
        printf("%d\n",p->data);
        p = p->next;
    }
}
int main() {
    printf("Hello, World!\n");

    node *head = NULL;
    
    head = Append(head,11);
    Append(head,22);
    Append(head,33);
    
    // add 55 to the first list
    head = appendFirst(head,55);
    printNodes(head);
    return 0;
}
