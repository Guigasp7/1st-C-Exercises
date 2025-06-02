#include "list.h"
#include <stdbool.h>

void list_add(t_list* list, t_list_node* node);
void list_print(t_list* list);
int compare(void* data1, void* data2);
void destroy(void* data);
void list_insert_next(t_list* list, t_list_node* node, void* data);
void list_remove_next(t_list* list, t_list_node* node, void** data);
bool list_node_is_head(t_list const* list, t_list_node const* node);
bool list_node_is_tail(t_list const* list, t_list_node const* node);
t_list_node* list_head(t_list const* list);
t_list_node* list_tail(t_list const* list);
unsigned int list_size(t_list const* list);