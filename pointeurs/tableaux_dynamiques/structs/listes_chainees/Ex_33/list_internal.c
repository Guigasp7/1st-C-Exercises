#include "list.h"
#include "list_internal.h"
#include "stdio.h"
#include <stdlib.h>

void list_add(t_list* list, t_list_node* node)
{
    if (!(list->head))
    {
        list->head = node;
    }
	if (list->tail)
	{
		list->tail->next = node;
	}
	list->tail = node;
}

void list_print(t_list* list)
{
	t_list_node* current_node = list->head;
	while (current_node)
	{
		printf("%d",*(int*)current_node->data);
		current_node = current_node->next;
	}
}