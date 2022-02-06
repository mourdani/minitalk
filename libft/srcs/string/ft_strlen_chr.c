#include "libft.h"

/*
**	Ft_strlen_chr() counts the number of characters until it occurs c character
**	or the end of the string.
*/
int		ft_strlen_chr(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
		i++;
	return (i);
}
