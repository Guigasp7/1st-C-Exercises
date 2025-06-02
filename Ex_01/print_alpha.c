#include <stdio.h>
#include "print_alpha.h"

int main(void)
{
	for (char counter = 97; counter<124; counter ++)
	{
		my_put_char(counter);
	}
	return 0;

}

size_t my_put_char(char c)
{
	return fwrite(&c, sizeof(char), 1, stdout);
}
