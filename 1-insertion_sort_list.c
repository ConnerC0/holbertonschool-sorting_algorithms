#include "sort.h"
#include <stddef.h>

/**
 * swap - sorts linked list in ascending numerical order
 *
 * @head: The list to be sorted
 * @leftNode: first node
 * @rightNode: second node
 */
void swap(listint_t **head, listint_t **leftNode, listint_t **rightNode)
{
	listint_t *temp1 = *leftNode, *temp2 = *rightNode;
	listint_t *previous = NULL, *next = NULL;

	if (temp1->prev)
	{
		previous = temp1->prev;
		previous->next = temp2;
	}
	temp2->prev = previous;
	if (temp2->next)
	{
		next = temp2->next;
		next->prev = temp1;
	}
	temp1->next = next;
	temp2->next = temp1;
	temp1->prev = temp2;
	if (*head == temp1)
		*head = temp2;
}

/**
 * insertion_sort_list - sorts linked list in ascending numerical order
 *
 * @list: The list to be sorted.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *nodeCheckerF, *nodeCheckerB;

	if (!list)
		return;
	nodeCheckerF = *list;
	while (nodeCheckerF->next)
	{
		if (nodeCheckerF->n > nodeCheckerF->next->n)
		{
			swap(list, &nodeCheckerF, &(nodeCheckerF->next));
			print_list(*list);
			nodeCheckerB = nodeCheckerF->prev;
			while (nodeCheckerB->prev && (nodeCheckerB->n < nodeCheckerB->prev->n))
			{
				swap(list, &(nodeCheckerB->prev), &nodeCheckerB);
				print_list(*list);
			}
			continue;
		} else
			nodeCheckerF = nodeCheckerF->next;
	}
}
