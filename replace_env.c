#include "function.h"
#include "shell.h"
/**
 * subEnv - This funcrion is used to replace env...
 * variable
 *
 * @mytype: input as parameter
 * @envi_var: input environment variable
 *
 * Return: pointer to a string
**/
char *subEnv(shell_t *mytype, char *envi_var)
{
	char *envi;

	(void) mytype;

	envi = getEnv(envi_var);
	if (envi != NULL)
	{
		return (envi);
	}

	return (NULL);
}

