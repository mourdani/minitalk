#include "libft.h"

void	ft_bzero(void *str, unsigned int n)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = str;
	while (n--)
		ptr[i++] = '\0';
}
