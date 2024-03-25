#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * set_string - Sets the value of a pointer to a new string.
 * @s: Pointer to a pointer to char (string to be updated).
 * @to: Pointer to the new string value.
 */
void set_string(char **s, char *to) {
if (*s != NULL)
free(*s);


*s = (char *)malloc(strlen(to) + 1);
if (*s != NULL)
strcpy(*s, to);

}
