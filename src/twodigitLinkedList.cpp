/*
OVERVIEW:  Given a single linked list (two digits as a node).Convert that to number


INPUTS:  SLL head pointer

OUTPUT: Create a number from the linked list given ,In each node there are two numbers ,digit1 and digit1 ,
So if the nodes are 12->34->56->78 , Final number would be 12345678 ( Integer)

ERROR CASES:

NOTES: Only Postive Numbers
*/

#include <stdio.h>
#include <malloc.h>
struct node {
	int digit1;
	int digit2;
	struct node *next;
};

int convert_sll_2digit_to_int(struct node *head){
	struct node *n;
	int count = 0, num1, num2, number = 0,k;
	n = head;
	while (n != NULL)
	{
		count++;
		n = n->next;
	}
	n = head;
	while (n != NULL)
	{
		num1 = n->digit1;
		num2 = n->digit2;
		num1 = num1 * 10 + num2;
		k = (count - 1) * 2;
		while (k > 0)
		{
			num1 = num1 * 10;
			k--;
		}
		number = number + num1;
		count--;
		n = n->next;
	}
	return number;
}
