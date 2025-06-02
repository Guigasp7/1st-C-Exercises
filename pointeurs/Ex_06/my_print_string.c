#include <stdio.h>
#include "my_print_string.h"

int main(void)
{
	char* str = "Hellohhdhhdhdhdhdhhdhhdhhdhdworld";
	int i = 0;
	while (str[i]!= '\0')
	{
		my_put_char(str[i]);
		i++;
	}
	my_put_char ('\n');
	return 0;

}

size_t my_put_char(char c)
{
	return fwrite(&c, sizeof(char), 1, stdout);
}
