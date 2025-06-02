#include <stdio.h>
#include <stdbool.h>
#include "sort_char.h"
#include "swap_char.h"
#include "string_length.h"

int main(void)
{
	char* string = "938A41";
	sort_char(string, string_length(string));
	printf("%s\n",string);
	return 0;
}

void sort_char(char* tab, unsigned int tab_length)
{
	bool change = true;
	while (change)
	{
		change = false;
		for (int i = 0; i <tab_length-1; i++)
		{
			if (tab[i]>tab[i+1])
			{
				change = true;
				swap_char(&tab[i], &tab[i+1]);
			}
		}
	}
}
