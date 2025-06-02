#include "list.h"
#include "list_internal.h"

void list_insert_next(t_list* list, t_list_node* node, void* data)
{
    if (!node)
    {
        t_list_node* newNode = node_create(data);
        newNode->next = list->head;
        list->head = newNode;
    }
	else if(list->tail == node)
	{
		list->tail->next = node_create(data);
        list->tail = list->tail->next;
	}
	else
    {
        t_list_node* newNode = node_create(data);
        newNode->next = node->next;
        node->next = newNode;
    }
    list->size+=1;
}