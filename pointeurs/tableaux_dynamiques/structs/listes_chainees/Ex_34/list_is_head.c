#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "list.h"
#include "list_internal.h"

bool list_node_is_head(t_list const* list, t_list_node const* node)
{
    if(node == list->head)
    {
        return true;
    }
    else
    {
        return false;
    }
}