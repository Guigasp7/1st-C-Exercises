#include "list.h"
#include "list_internal.h"

t_list_node* list_node_next(t_list_node const* node)
{
    if(node)
    {
        return node->next;
    }
    else
    {
        return NULL;
    }
}