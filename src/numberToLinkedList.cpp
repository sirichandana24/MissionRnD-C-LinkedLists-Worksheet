/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
}node2;
struct node* numberToLinkedList(int N) {
	struct node *head = NULL;
	struct node *last = NULL;
	int a, t, rev = 0;
	if (N == 0)
	{
		if (head == NULL)
		{
			struct node *n;
			n = (struct node*)malloc(sizeof(node2));
			n->num = N;
			n->next = NULL;
			head = n;
			last = n;
		}
	}
	if (N < 0)
		N = N*-1;
	a = N;
	while (a > 0)
	{
		t = a % 10;
		rev = rev * 10 + t;
		a = a / 10;
	}
	while (rev > 0)
	{
		t = rev % 10;
		struct node *n;
		n = (struct node*)malloc(sizeof(node2));
		n->num = t;
		n->next = NULL;
		if (head == NULL)
		{
			head = n;
			last = n;
		}
		else
		{
			last->next = n;
			last = n;
		}
	rev = rev / 10;
	}

	return head;
}

