#include "list.h"
#include "list_internal.h"

void list_foreach(t_list const* list, void (*action)(void*))
{
    t_list_node* current_node = list->head; 
    while(current_node)
    {
        action(current_node->data);
        current_node = list_node_next(current_node);
    }
}