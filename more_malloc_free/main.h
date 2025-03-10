#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h> /* For malloc, free, and size_t */
#include <string.h> /* For memset */

/* Function prototype for malloc_checked */
void *malloc_checked(unsigned int b);

/* Function prototype for string_nconcat */
char *string_nconcat(char *s1, char *s2, unsigned int n);

/* Function prototype for _calloc */
void *_calloc(unsigned int nmemb, unsigned int size);

#endif /* MAIN_H */
