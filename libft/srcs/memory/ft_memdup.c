#include "libft.h"

void	*ft_memdup(void *src, int size)
{ 
	void	*dest;
	
	if (!src || !(dest = ft_memalloc(size)))
		return (NULL);
		
	ft_memcpy(dest, src, size);
	return (dest);
}
