#include "sort.h"

/**
 * insertion_sort_list - sort double linked list
 * @list: double linked list
 */

void insertion_sort_list(listint_t **list)
{

	listint_t *ptr, *tmp, *tm2, *tm3, *tm4;
	int value, count;

	if (list == NULL)
		return;
	ptr = *list;
	if (ptr == NULL)
		return;
	while (ptr->next != NULL)
	{
		count = 0;
		tm2 = ptr;
		tmp = tm2->next;
		value = tmp->n;
		while (tm2 != NULL && tm2->n > value)
		{
			count = 1;
			tm4 = tmp->next;
			tm3 = tm2;
			tm2 = tm2->prev;
			tm3->next = tmp->next;
			tm3->prev = tmp;
			tmp->next = tm3;
			tmp->prev = tm2;
			if (tm4 != NULL)
				tm4->prev = tm3;
			if (tm2 != NULL)
				tm2->next = tmp;
			if (tm2 == NULL)
				*list = tmp;
			value = tmp->n;
			print_list(*list);
		}
		if (count == 0)
			ptr = ptr->next;
		else
			ptr = ptr->prev;
	}
}
