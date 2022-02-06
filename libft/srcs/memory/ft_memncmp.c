#include "libft.h"

int		ft_memncmp(void *s1, void *s2, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*ptr2;

	ptr = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (n--)
	{
		if (*ptr != *ptr2)
			return ((unsigned char)*ptr - (unsigned char)*ptr2);
		ptr++;
		ptr2++;
	}
	return (0);
}
