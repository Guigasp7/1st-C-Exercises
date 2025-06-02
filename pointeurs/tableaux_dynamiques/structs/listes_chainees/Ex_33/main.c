#include <stdlib.h>
#include <stddef.h>
#include "list_internal.h"
#include "list.h"

int main(void)
{
    int a = 4;
    int b = 7;
    t_list* list = list_create();
    list_init(list,NULL,NULL);
    list_add(list, node_create(&a));
    list_add(list, node_create(&b));
    list_print(list);
    list_destroy(&list);
}