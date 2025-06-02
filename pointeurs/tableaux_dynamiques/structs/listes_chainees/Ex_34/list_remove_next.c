#include<stdlib.h>
#include "list.h"
#include "list_internal.h"

void list_remove_next(t_list* list, t_list_node* node, void** data)
{
    if (node->next)
    {
        data = node->next->data;
        if (node->next->next)
        {
            t_list_node* newNext = node->next->next;
            node->next = newNext;
        }
        else 
        {
            free(node->next);
            node->next = NULL;
        }
        list->size-=1;
    }
}