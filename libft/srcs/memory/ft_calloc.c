#include "../includes/libft.h"

/*
DESCRIPTION
	The ft_calloc() function contiguously allocates enough space for count objects 
	that are size bytes of memory each and returns a pointer to the allocated 
	memory. 
	The allocated memory is filled with bytes of value zero.
RETURN VALUES
	If successful, ft_calloc() return a pointer to allocated memory. 
	If there is an error, they return a NULL pointer and set errno to ENOMEM.
*/

void	*ft_calloc(size_t count, size_t size)
{
	void	*memory;

	memory = malloc(count * size);
	if (!memory)
		return (NULL);
	ft_bzero(memory, count * size);
	return (memory);
}