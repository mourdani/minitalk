#include "libft.h"

char	*ft_convert_wchar_str(wchar_t *str, int len)
{
	char	*new;
	int		i;

	i = 0;
	new = (char *)malloc(len + 1);
	while (i < len)
	{
		new[i] = (char)str[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

