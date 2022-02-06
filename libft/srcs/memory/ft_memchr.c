#include "libft.h"

void	*ft_memchr(void *str, int c, size_t n)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = (char *)str;
	while (n--)
	{
		if (ptr[i] == c)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}
