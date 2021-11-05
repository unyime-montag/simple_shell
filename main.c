#include "shell.h"

/**
 * main - entry point
 *
 * Return: 0 on success, 1 on error
 */

int main()
{
  char *line;
  char **args;
  int status;

  do {
    printf("> ");
    line = lsh_read_line();
    args = lsh_split_line(line);
    status = lsh_execute(args);

    free(line);
    free(args);
  } while (status);
}
