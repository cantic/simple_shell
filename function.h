#ifndef FUNCTION_H
#define FUNCTION_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/wait.h>

#include "shell.h"

extern char **environ;

void begin(shell_t *mytype);
int number(int num);
char *stringify(int numbe);
int isNumeric(unsigned int number);
int hasLetter(char *string);
char **tokenize_words(char *string, const char *del);
char *mergeWords(char *w1, char *w2, char *w3, const char *del);
char *parse_prompt(void);
void initiatePrompt(shell_t *mytype);
void signatureHandler(int num);
int writeCharacter(char character);
int display(char *message);
int displayError(char *message);
void getInput(shell_t *mytype);
int writeCharacterToFD(char cha, int fil_d);
int _strlen(char *s);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
char *_strdup(char *str);
int _strcmp(char *s1, char *s2);
int outputToFD(char *message, int fil_d);
int isExecutable(char *name);
int isFile(char *filename);
char *exchange(shell_t *mytype, int *id, char *word);
int writeCharacterToFD(char cha, int fil_d);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
char *subEnv(shell_t *mytype, char *envi_var);
void patternAnalysis(shell_t *mytype, char **args);
char *handle_pattern(shell_t *mytype, char *words);
char *subtituteValue(shell_t *info, int *id, char *str);
void releaseMemory(void *pointer);
void releaseMemoryPointer(void **pointer);
void binaryExit(shell_t *mytype, char **args);
int manageNumbers(shell_t *mytype, char *argument);
void run(char *cmd, char **argu, shell_t *mytype, char *buffer);
int getCurrentDir(char *command, char **argu, char *buff, shell_t *mytype);
void issue(shell_t *mytype);
char *selectMessage(shell_t mytype);
void additionalError(shell_t *mytype, char *more);
char *getEnv(const char *variable);
char *choose(char *dirname, shell_t *mytype);
void isCurrPath(char *pat, shell_t *mytype);
void fetchFullEnv(void);
void binaryEnv(shell_t *mytype, char **args);
int systemFunction(shell_t *mytype, char **args);
int verifyBuiltin(shell_t *mytype, char **args);
void evaluate(char **args, shell_t *mytype, char *buffer);

int _atoi(char *s);
#endif
