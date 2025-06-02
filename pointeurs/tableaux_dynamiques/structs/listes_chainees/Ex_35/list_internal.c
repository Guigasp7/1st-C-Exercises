#include "list.h"
#include "list_internal.h"
#include "stdio.h"
#include <stdlib.h>
#include <stdbool.h>

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
	list->size +=1;
}

void list_print(t_list* list)
{
	printf("%s%d\n","Size ",list->size);
	t_list_node* current_node = list->head;
	while (current_node)
	{
		if (list_node_is_head(list,current_node))
		{
			printf("%s","Head ");
		}
		if(list_node_is_tail(list,current_node))
		{
			printf("%s", "Tail :");
		}
		printf("%d\n",*(int*)current_node->data);
		current_node = current_node->next;
	}
}

int compare(void* data1, void* data2)
{
	int a = *((int*)data1);
	int b = *((int*)data2);
	return a < b;
}

void destroy(void* data)
{
	free(data);
}
