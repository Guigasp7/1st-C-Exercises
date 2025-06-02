#include <stdio.h>
#include <stddef.h>
#include "string_length.h"
#include "find_string.h"

int main(void)
{
	char* to_find = "Wulrd";
	char* str = "Hewwo Wulrd";
	char const* found = find_string(to_find, str);
	printf("%s\n", found);
	return 0;
}

char const* find_string(char const* to_find, char const* str)
{
	int FullLen = string_length(to_find);
	int comptFind = 0;
	for (int i = 0; i <= string_length(str); i++)
	{
		if (str[i] == to_find[comptFind])
		{
			comptFind++;
		}
		else
		{
			comptFind = 0;
		}
		if (comptFind == FullLen)
		{
			return &str[i-comptFind+1];
		}
	}
	return NULL;
}
