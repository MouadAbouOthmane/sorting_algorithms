#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 *
 * @list: head of double linked list
 */

void insertion_sort_list(listint_t **list)
{
	int is_sort = 0;
	listint_t *tmp, *head, *new_node, *node1, *node2;

	if (!list)
		return;

	head = *list;
	new_node = head;
	while (new_node)
	{
		while (new_node)
		{
			if (new_node->next != NULL && new_node->n > new_node->next->n)
			{
				node1 = new_node;		// 19
				node2 = new_node->next; // 7

				if (node1 == head)
					head = node2;

				tmp = node1->next;
				node1->next = node2->next;
				node2->next = tmp;

				if (node1->next != NULL)
					node1->next->prev = node1;
				if (node2->next != NULL)
					node2->next->prev = node2;

				tmp = node1->prev;
				node1->prev = node2->prev;
				node2->prev = tmp;

				if (node1->prev != NULL)
					node1->prev->next = node1;
				if (node2->prev != NULL)
					node2->prev->next = node2;

				new_node = head;
				print_list(head);
			}
			else
				new_node = new_node->next;
		}
	}
	*list = head;
}
