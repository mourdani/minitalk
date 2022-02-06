#include "libft.h"

int		ft_wstrlen(wchar_t *ws)
{
	int	len;

	len = 0;
	while (ws[len])
	{
		if (ws[len] > 0xFF)
			return (EXIT_FAILURE);
		len++;
	}
	return (len);
}
