#include <stdio.h>
#include "display_combination.h"

int main(void)
{

	for (char nb1 = 48; nb1<57; nb1++)
	{
		for (char nb2 = int(nb1) + 1; nb2 < 58; nb2++ )
		{
			my_put_char(nb1);
			my_put_char(nb2);
			my_put_char(' ');
		}
	}
	return 0;

}

size_t my_put_char(char c)
{
	return fwrite(&c, sizeof(char), 1, stdout);

}
