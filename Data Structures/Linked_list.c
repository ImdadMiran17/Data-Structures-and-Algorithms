#include <stdio.h>
#include <stdlib.h>

typedef  struct node Node;

struct node{
  int data;
  Node *next;
};

Node *create_node(int value,Node *next){
    Node *new_node = (Node *)malloc(sizeof(Node));

    if(new_node == NULL){
      printf("Eror ! Couldn't create a new node");
      exit(1);
    }

    new_node->data = value;
    new_node->next = next;

    return new_node;
}

void printList(Node *head){
  Node *current_node = head;
  while(current_node!=NULL){
    printf("%d ",current_node->data);
    current_node = current_node->next;
  }
  printf("\n");
}

int main(void){
  Node *head;
  Node *first;
  Node *second;

  second = create_node(7, NULL);
  first = create_node(6, second);
  head = create_node(5, first);
  
  printList(head);
  return 0;
}

