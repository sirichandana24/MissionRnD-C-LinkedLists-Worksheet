/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};

void sll_012_sort(struct node *head){
	struct node *n;
	int count[3] = { 0, 0, 0 }, i = 0;
	n = head;
	while (n != NULL)
	{
		count[n->data] = count[n->data] + 1;
		n = n->next;
	}
	n = head;
	while (n != NULL)
	{
		if (count[i] == 0)
			i++;
		else
		{
			n->data = i;
			count[i]--;
			n = n->next;
		}
	}
}
