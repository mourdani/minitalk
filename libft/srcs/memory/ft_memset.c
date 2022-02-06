#include "libft.h"

void	*ft_memset(void *str, int c, size_t size)
{
	char	*tmp;
	size_t	i;

	i = 0;
	tmp = str;
	while (i < size)
		tmp[i++] = c;
	return (str);
}
