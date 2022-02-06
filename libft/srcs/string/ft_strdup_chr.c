#include "libft.h"

char	*ft_strdup_chr(char *src, char c)
{
	char	*dest;
	int		len;

	len = 0;
	while (src[len] != '\0' && src[len] != c)
		len++;
	if (!(dest = ft_strnew(len)))
		return (NULL);
		
	dest = ft_strncpy(src, len);
	return (dest);
}
