#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*tab;

	if (!(tab = (char *)malloc(size + 1)))
		return (NULL);
	ft_memset(tab, '\0', size + 1);
	return (tab);
}
