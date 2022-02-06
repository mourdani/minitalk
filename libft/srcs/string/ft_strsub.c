#include "libft.h"

char	*ft_strsub(char *str, int start, size_t len)
{
	char	*new;
	int		i;
	
	if (!str || !(new = ft_strnew(len)))
		return (NULL);
	i = 0;
	while (len--)
		new[i++] = str[start++];
	return (new);
}
