#include "function.h"
#include "shell.h"
/**
 * patternAnalysis - This function collects a pattern and helps
 * you analyze such pattern
 * @mytype: input parameter
 * @args: argument to anaylze
 * Return: void or nothing
**/
void patternAnalysis(shell_t *mytype, char **args)
{
	int j;

	for (j = 0; args[j] != NULL; j++)
	{
		args[j] = handle_pattern(mytype, args[j]);
	}
}
