#include "list.h"
#include <stdlib.h>

void list_init(t_list* list, int (*compare)(void*, void*), void (*destroy)(void*))
{
	list->compare = compare;
	list->destroy = destroy;
}

t_list_node* node_create(void* data)
{
	t_list_node* node = calloc(1,sizeof(t_list_node));
	node->data = data;
	
	return node;
}