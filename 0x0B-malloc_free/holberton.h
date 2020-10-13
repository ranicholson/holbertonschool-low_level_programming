#ifndef HOLBERTON_H
#define HOLBERON_H

/**
 * main- Header file
 * description: Linking functions to other files
 * Return: No return on a header.
 */

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);

#endif