#include "function.h"
#include "shell.h"
/**
 * isCurrPath - check how the path is being arranged
 * or its order of arrangement
 *
 * @pat: the path to check
 * @mytype: a struct with defined data type
 *
 * Return: just perform task without returning
 **/
void isCurrPath(char *pat, shell_t *mytype)
{
	mytype->cur_path = 0;

	if (pat == NULL)
	{
		return;
	}

	if (pat[0] == ':')
	{
		mytype->cur_path = 1;
	}
}
