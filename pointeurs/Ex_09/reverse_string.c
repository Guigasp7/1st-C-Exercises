#include <stdio.h>
#include "reverse_string.h"
#include "my_put_char.h"
#include "string_length.h"

int main(void)
{
	char const* string = "Ayo lol hehe";
	reverse_string(string);
	return 0;
}

void reverse_string (char const* str)
{
	for (int i = string_length(str)-1; i>=0; i--)
	{
		my_put_char(str[i]);
	}
}
