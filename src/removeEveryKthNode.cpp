/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};
struct node * removeEveryKthNode(struct node *head, int K) {
	struct node *n, *prev;
	int count = 0;
	if (K <= 1)
		return NULL;
	n = head;
	prev = head;
	while (n != NULL)
	{
		count++;
		if ((count + 1) % K == 0)
		{
			if (n->next == NULL)
			{
				n = NULL;
			}
			else
				n->next = n->next->next;
		}
		else
		{
			prev = n;
			n = n->next;
		}
	}
	return head;
}
