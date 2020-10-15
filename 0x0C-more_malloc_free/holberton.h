#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
 * main- Header file
 * description: Linking functions to other files
 * Return: No return on a header.
 */

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int);

#endif
