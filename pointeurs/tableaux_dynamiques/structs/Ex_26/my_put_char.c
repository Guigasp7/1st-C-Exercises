#include "my_put_char.h"
#include <stdio.h>

void my_put_char(char c)
{
	fwrite(&c, 1, 1, stdout);
}
