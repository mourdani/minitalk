#include "libft.h"

char	*ft_convert_hex(unsigned long int nb, int type)
{
	char	*print;
	int		i;

	i = 0;
	print = ft_memalloc(21);
	if (nb == 0)
		print[i] = '0';
	if (type == 0)
		while (nb != 0)
		{
			print[i++] = "0123456789abcdef"[nb % 16];
			nb /= 16;
		}
	else
		while (nb != 0)
		{
			print[i++] = "0123456789ABCDEF"[nb % 16];
			nb /= 16;
		}
	return (ft_strrev(print));
}
