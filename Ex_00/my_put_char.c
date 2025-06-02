#include <stdio.h>
#include "my_put_char.h"

int main(void)
{
	char x = 'w';
	my_put_char(x);
	return 0;

}

size_t my_put_char(char c)
{
	return fwrite(&c, sizeof(char), 1, stdout);
}
