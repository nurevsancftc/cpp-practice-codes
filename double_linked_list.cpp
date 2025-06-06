#include <iostream>
using namespace std;

struct Node
{
	int data;
	struct Node *prev;
	struct Node *next;
};

struct Node* head = NULL;

void insert(int newdata)
{
	struct Node* newnode = (struct Node*) malloc(sizeof(struct Node));
	newnode->data = newdata; 
	newnode->prev = NULL; 
	newnode->next = head; 
	if(head != NULL)
		head->prev = newnode ;
	head = newnode;
}
void display()
{
   struct Node* ptr;
   ptr = head;
   while(ptr != NULL) {
	  cout<< ptr->data <<" ";
	  ptr = ptr->next;
   }
}

int main() {
   insert(1);
   insert(9);
   insert(8);
   insert(3);
   insert(4);
   cout<<"The doubly linked list is: ";
   display();
   return 0;
}
