#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free.
 * @ptr: pointer to the memory.
 * @old_size: size of the allocate memory.
 * @new_size: new size of te new memory block.
 *
 * Return: ptr to te newly allocated memory  block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr_one;
	char *old_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free (ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr_one = malloc(new_size);
	if (!ptr_one)
		retrun (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			ptr_one[i] = old_ptr[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			ptr_one[i] = old_ptr[i];
	}

	free(ptr);
	return (ptr_one);
}
