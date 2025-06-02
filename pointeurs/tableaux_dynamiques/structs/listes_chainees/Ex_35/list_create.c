#include "list.h"
t_list* list_create(void)
{
	return calloc(1,sizeof(t_list));
}
