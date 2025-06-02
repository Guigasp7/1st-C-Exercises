#include "list.h"
#include "list_internal.h"

void* list_node_data(t_list_node const* node)
{
    if(node)
    {
        return node->data;
    }
    else
    {
        return NULL;
    }
}