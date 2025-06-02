#include "my_put_char.h"
#include <stddef.h>

void my_put_string(char const* str)
{
	if (str == NULL)
		return;

	for (int i = 0; str[i] != '\0'; ++i)
		my_put_char(str[i]);
}

