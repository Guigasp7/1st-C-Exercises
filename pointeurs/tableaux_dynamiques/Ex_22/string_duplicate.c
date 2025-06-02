#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "string_length.h"
#include "string_sized_copy.h"
#include "string_safe_copy.h"
#include "string_duplicate.h"

int main(void)
{
	char* src = "Yeys we win";
	char* result = string_duplicate(src);
	printf("%s\n",result);
	free(result);
	return 0;
}

char* string_duplicate(char const* str)
{
	int str_length = string_length(str);
	char* dest = malloc(str_length * sizeof(char));
	return string_safe_copy(dest, str, str_length+1);
}
