#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
   int data;
   struct Node *next;
} Node;

Node* add_element( Node *head, int element ) {
   Node *new_node;
   new_node = malloc( sizeof( Node ) );
   new_node->data = element;
   new_node->next = head;
   return new_node;
}

int length(Node *head) {
  Node *current;
  current = head;
  int count = 0;
  while( current != NULL ) {
    count++;
    current = current->next;
  }
  return count;
}
void print_list( Node *head ) {
   Node *current;
   current = head;
   while( current != NULL ) {
      if ( current == head ) {
         printf( "{ %d", current->data );
      }
      else if ( current->next != NULL ) {
         printf( ", %d", current->data );
      }
      else {
         printf( ", %d }\n", current->data );
      }
      current = current->next;
   }
}
int value_at(Node *head, int n){
	int len=length(head),i=1,value;
	Node *p=head;
	if(n<1||n>len){
		return(-1);
		exit(1);
	}
	else{
		while(i<n){
		p=p->next;
		i++;	
		}
		value=p->data;
		return(value);
	}
}
void add_element_at_end(Node *head, int element){
	int len=length(head),i=1;
	Node *p=head;
	Node *new_next;
	new_next=malloc(sizeof(Node));
	while(i<len){
		p=p->next;
		i++;
	}
	p->next=new_next;
	p->next->data=element;
	p->next->next=NULL;
} 
int main() {
   Node* list_head;
   int value,Node_number=2;
   list_head = NULL;
   list_head = add_element( list_head, 3 );
   list_head = add_element( list_head, 2 );
   list_head = add_element( list_head, 1 );
   list_head = add_element( list_head, 0 );

   int len = length( list_head );
   printf( "Length is: %d\n", len );
   print_list( list_head );
   value=value_at(list_head, Node_number);
   printf("The value at node %d is: %d\n",Node_number, value);
   printf("Adding value 4 at end of list in a new node - node %d\n",len+1);
   add_element_at_end(list_head,4);
   len = length(list_head);
   printf( "Length is: %d\n", len );
   print_list(list_head);
}

