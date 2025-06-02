#include "list.h"

void list_destroy(t_list** list)
{
	t_list_node* current_node = (*list)->head;
	while (current_node->next)
	{
		free(current_node->data);
		t_list_node* next = current_node->next;
		free(current_node);
		current_node = next;
	}
	free(*list);
	*list = NULL;
}
