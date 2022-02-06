#include "libft.h"

char	*ft_convert_octal(unsigned long int nb)
{
	char	*print;
	int		i;

	i = 0;
	print = (char *)malloc(22);
	if (nb == 0)
		i++;
	while (nb != 0)
	{
		print[i++] = (nb % 8) + 48;
		nb /= 8;
	}
	print[i] = '\0';
	return (ft_strrev(print));
}
