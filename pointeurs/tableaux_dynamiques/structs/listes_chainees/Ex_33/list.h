#ifndef LIST
#define LIST
#include <stdlib.h>

typedef struct s_list_node
{
	void* data;
	struct s_list_node* next;
}t_list_node;

typedef struct s_list
{
	int size;
	t_list_node* head;
	t_list_node* tail;
	int (*compare)(void*, void*);
	void (*destroy)(void*);
}t_list;

t_list* list_create(void);
void list_init(t_list* list, int (*compare)(void*, void*), void (*destroy)(void*));
void list_destroy(t_list** list);
void list_print(t_list* list);
void list_add(t_list* list, t_list_node* node);
t_list_node* node_create(void* data);

#endif
