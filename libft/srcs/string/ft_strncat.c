#include "libft.h"

char	*ft_strncat(char *dest, char *src, size_t size)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while ((src[j] != '\0') && (j < size))
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}
