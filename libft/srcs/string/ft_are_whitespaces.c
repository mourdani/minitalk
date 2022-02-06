#include "libft.h"

int		ft_are_whitespaces(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (IS_WHITE(str[i]))
			return (1);
		i++;
	}
	return (0);
}
