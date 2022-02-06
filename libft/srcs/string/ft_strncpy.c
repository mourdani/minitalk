#include "libft.h"

char	*ft_strncpy(char *str, int size)
{
	char	*new;
	int		i;

	i = 0;
	if (!(new = ft_strnew(size + 1)))
		return (NULL);
	while (i < size)
	{
		new[i] = str[i];
		i++;
	}
	return (new);
}
