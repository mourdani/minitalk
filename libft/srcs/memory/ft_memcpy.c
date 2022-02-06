#include "libft.h"

void	*ft_memcpy(void *dest, void *src, unsigned int size)
{
	while (size--)
		((char *)dest)[size] = ((char *)src)[size];
	return (dest);
}
