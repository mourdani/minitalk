#include "libft.h"

char	*ft_strrev(char *str)
{
	char	*rev;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(str);
	if (!(rev = ft_strnew(len)))
		return (NULL);
	while (i < len)
		rev[i++] = str[len];
	free(str);
	return (rev);
}
