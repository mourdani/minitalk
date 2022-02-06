#include "libft.h"

void	ft_putendl(char *str)
{
	int		i;

	i = 0;
	if (!str)
		return ;
	while (str[i])
		ft_putchar(str[i++]);
	ft_putchar('\n');
}
