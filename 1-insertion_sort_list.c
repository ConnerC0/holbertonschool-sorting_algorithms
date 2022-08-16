#include "sort.h"
#include <stddef.h>

/**
 * insertion_sort_list - sorts linked list in ascending numerical order
 *
 * @list: The list to be sorted.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp1, *temp2, *nodeCheckerF, *nodeCheckerB;

	if (*list == NULL)
		return;
	nodeCheckerF = *list;
	while (nodeCheckerF->next)
	{
		if (nodeCheckerF->n > nodeCheckerF->next->n)
		{
			nodeCheckerB = nodeCheckerF->prev;
			temp1 = nodeCheckerF;
			temp2 = nodeCheckerF->next;
			temp1->next = temp2->next, temp2->prev = temp1->prev;
			temp1->prev = temp2, temp2->next = temp1;
			nodeCheckerB->next = temp2;
			if (temp2->prev == NULL)
				*list = temp2;
			print_list(*list);
			while (nodeCheckerB)
			{
				if (nodeCheckerB->n > nodeCheckerB->next->n)
				{
					temp1 = nodeCheckerB;
					temp2 = nodeCheckerB->next;
					if (temp1->prev)
						temp1->prev->next = temp2;
					temp1->next = temp2->next, temp2->prev = temp1->prev;
					temp1->prev = temp2, temp2->next = temp1;
					temp1->next->prev = temp1;
					if (temp2->prev == NULL)
						*list = temp2;
					print_list(*list);
				}
				nodeCheckerB = nodeCheckerB->prev;
			}
			continue;
		}
		nodeCheckerF = nodeCheckerF->next;
	}
}
