#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*dest;

	if (!(dest = ft_strnew(ft_strlen(src))))
		return (NULL);
	ft_strcpy(dest, src);
	return (dest);
}
