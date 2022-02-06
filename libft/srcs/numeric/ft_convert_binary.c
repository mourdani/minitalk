#include "libft.h"

char	*ft_convert_binary(unsigned long int nb)
{
	char	*print;
	int		i;

	i = 0;
	if (!(print = ft_memalloc(33)))
		return (NULL);
	if (nb == 0)
		print[i] = '0';
	while (nb != 0)
	{
		print[i++] = (nb % 2) + 48;
		nb /= 2;
	}
	return (ft_strrev(print));
}