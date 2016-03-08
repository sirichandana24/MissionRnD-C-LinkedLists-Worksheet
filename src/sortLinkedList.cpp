/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
}node1;

struct node * sortLinkedList(struct node *head) {
	struct node *m,*n;
	int temp;
	n = head;
	if (head == NULL)
		return NULL;
	while (n != NULL){
		m = n->next;
		while (m != NULL)
		{
			if (n->num > m->num)
			{
				temp = n->num;
				n->num = m->num;
				m->num = temp;
			}
			m = m->next;
		}
		n = n->next;
	}
	return head;
}