#include <stdio.h>
#include "funny_alpha.h"

int main(void)
{
	for (char counter = 65; counter<124; counter ++)
	{
		if (counter%2==1)
		{
			counter += 32;
		}
		else
		{
			counter -= 32;
		}
		my_put_char(counter);
	}
	return 0;

}

size_t my_put_char(char c)
{
	return fwrite(&c, sizeof(char), 1, stdout);
}
