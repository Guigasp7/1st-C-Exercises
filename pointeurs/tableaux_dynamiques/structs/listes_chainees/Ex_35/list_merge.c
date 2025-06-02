#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "list.h"
#include "list_internal.h"

t_list* list_merge(t_list* list1, t_list* list2)
{
    list1->tail->next = list2->head;
    list1->tail = list2->tail;
    list_destroy(&list2);
    return list1;
}