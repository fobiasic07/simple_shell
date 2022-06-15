#ifndef SIMPLE_SHELL
#define SIMPLE_SHELL

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

void _puts(char *str);
unsigned int nbr_spaces(char *s);
char **stringToTokens(char *str);
int execute(char **cmd);
int main(int argc, char **argv);

#endif
