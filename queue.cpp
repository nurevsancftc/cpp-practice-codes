#include <iostream>
#include <stdlib.h>

using namespace std;
int limit = 100;

int queue[100];
int front, rear;
int i;
int choice;

void insert()
{
	int element;
	if (rear == limit - 1)
		cout << "Queue Overflow\n";
	else
	{
		if (front == -1)
		{
			front = 0;
			cout << "enter the element to be inserted in queue; ";
			cin >> element;
			rear++;
			queue[rear] = element;
		}
	}
}

void delet() 
{
	if (front == -1 || front > rear)
		cout << "queue underflow\n";
	else
	{
		cout<< "the deleted element is the queue is; "<< queue[front]<<endl;
		front++;
	}
}
void display()
{
	if (front == -1 || front > rear)
		cout << "queue underflow\n";
	else
	{
		cout << "the elements of the queue are: "<< endl;
		for (i = front; i <= rear; i++)
		cout << queue[i] <<endl;
	}
}

int main()
{
	cout << "array implementation of queues" << endl;
	front = rear = -1;
	do
	{
		cout << "1. insert\n2. delete\n3. display\n4. exit\n\n";
		cout << "enter your choise: ";
		cin >> choice;

		switch(choice)
		{
			case 1:
			{
				insert();
				break;
			}
			case 2:
			{
				delet();
				break;
			}
			case 3:
			{
				display();
				break;
			}
			case 4:
			{
				exit(0);
				break;
			}
			default:
			{
				printf("sorry, invalid choice!\n");
				break;
			}
		}
	}
	while (choice != 4);
		return 0;
}
