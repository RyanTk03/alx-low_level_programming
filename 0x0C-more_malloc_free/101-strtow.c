#include <stdio.h>
#include <stdlib.h>
#include "main.h"

#define IS_SPACE(c) ((c) == ' ' || (c) == '\t' || (c) == '\n')

int count_words(char *str);
char *duplicate_word(char *start, char *end);

/**
 * strtow - transform string to a list of words
 *
 * @str: the string to transform.
 *
 * Return: a list of word or null if it fail.
 */
char **strtow(char *str)
{
int i = 0;
int num_words = count_words(str);
char **words = (char **)malloc((num_words + 1) * sizeof(char *));

int in_word = 0;
int word_index = 0;
char *word_start = str;

if (str == NULL || *str == '\0')
return (NULL);

i = 0;
while (str[i])
{
if (!IS_SPACE(str[i]))
{
i = -1;
break;
}
i++;
}

if (i > 0)
return (NULL);

i = 0;

if (words == NULL)
return (NULL); /* Memory allocation failed */

while (*str)
{
if (!IS_SPACE(*str))
{
if (!in_word)
{
in_word = 1;
word_start = str;
}
}
else
{
if (in_word)
{
words[word_index] = duplicate_word(word_start, str);
if (words[word_index] == NULL)
{
/* Memory allocation failed */
for (i = 0; i < word_index; i++)
free(words[i]);
free(words);
return (NULL);
}
word_index++;
in_word = 0;
}
}
str++;
}

if (in_word)
{
words[word_index] = duplicate_word(word_start, str);
if (words[word_index] == NULL)
{
/* Memory allocation failed */
for (i = 0; i < word_index; i++)
free(words[i]);
free(words);
return (NULL);
}
word_index++;
}

words[word_index] = NULL; /* Add a NULL pointer at the end of the array */

return (words);
}

/**
 * count_words - count the number of words in a string
 *
 * @str: the string to count.
 *
 * Return: the number of words in the string.
 */
int count_words(char *str)
{
int count = 0;
int in_word = 0;

while (*str)
{
if (!IS_SPACE(*str))
{
if (!in_word)
{
in_word = 1;
count++;
}
}
else
in_word = 0;

str++;
}

return (count);
}


/**
 * duplicate_word - duplicate a word
 *
 * @start: the begining of the word to duplicate.
 * @end: the ending of the word to duplicate.
 *
 * Return: the word duplicated.
 */
char *duplicate_word(char *start, char *end)
{
int word_len = end - start;
char *word = (char *)malloc((word_len + 1) * sizeof(char));
int i = 0;

if (word == NULL)
return (NULL); /* Memory allocation failed */

for (i = 0; i < word_len; i++)
word[i] = start[i];
word[i] = '\0';

return (word);
}
