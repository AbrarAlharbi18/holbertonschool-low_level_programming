#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h> /* For malloc and free */

/* Function prototype for malloc_checked */
void *malloc_checked(unsigned int b);

/* Function prototype for string_nconcat */
char *string_nconcat(char *s1, char *s2, unsigned int n);

#endif /* MAIN_H */
