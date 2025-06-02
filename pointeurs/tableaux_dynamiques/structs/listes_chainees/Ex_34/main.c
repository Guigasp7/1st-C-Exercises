#include "list.h"
#include "list_internal.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int main(int argc, char** argv)
{
	t_list* list = list_create();
	if (list == NULL)
		return 1;

	list_init(list, &compare, &destroy);

	t_list_node* node = NULL;
	for (int i = 0; i < 20; ++i)
	{
		int* data = malloc(sizeof(int));
		*data = i;
		list_insert_next(list, node, data);
		node = list->tail;
	}

	list_print(list);

	node = list->head;
	while (node)
	{
		void* data = NULL;
		list_remove_next(list,node,&data);
		node = node->next;
		if (data)
		{
			int data2 = *((int*)data);
			printf("%d\n",data2);
		}
	}

	list_print(list);

	list_destroy(&list);
	return 0;
}
