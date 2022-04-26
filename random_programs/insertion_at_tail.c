#include <stdio.h>
#include <stdlib.h>

// linked list node
struct Node
{
	int data;
	struct Node* next;
};

// func to return new linked list node from the heap
struct Node* newNode(int key)
{
	struct Node* node = (struct Node*)malloc(sizeof(struct Node));
	node -> data = key;
	node -> next = NULL;

	return node;
}

// func to print a given linked list
void pl(struct Node* head)
{
	struct Node* prt = head;
	while (ptr)
	{
		printf("%d -> ", prt->data);
		ptr = ptr->next;
	}

	printf("NULL");
}

// func to add a new node at the tail end of the list instead of its head
stuct Node* aNode(struct Node** head, int key)
{
	struct Node* current = *head;
	struct Node* node = newNode(key);

	// case for len8
	if (current == NULL)
	{
		*head = node;
	}
	else
	{
		// locate the last node
		while (current->next != NULL)
		{
			current = current->next;
		}

		current-> next = node;
	}
}

int main(void)
{
	// inp keys
	int keys[] = {1, 2, 3, 4, 5};
	int n = sizeof(keys)/sizeof(keys[0]);

	// point to head node of linked list
	struct Node* head = NULL;
	for (int i = 0; i<n; i++)
	{
		aNode(&head, keys[i]);
	}

	// prin linked list
	pl(head);

	return 0;
}