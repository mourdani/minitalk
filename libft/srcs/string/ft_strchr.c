#include "libft.h"

char	*ft_strchr(char *str, char to_find)
{
	int i;
	
	i = 0;
	while (str[i] && str[i] != to_find)
		i++;
	if (str[i] == to_find)
		return (&str[i]);
	return (NULL);
}
