#includ "main.h"
#includ <stdlib.h>
/**
 * create_array - creates an array of char.
 * @size: size of the array.
 * @c: storaged char 
 *
 * Return: pointer of an array of chars
 */
char *creat_array(unsigned in size, char c)
{
	char *cr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	cr = malloc(sizeof(c) * size);

	if (cr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		cr [i] = c;
	return (cr);
}
