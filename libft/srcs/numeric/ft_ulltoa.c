#include "libftprintf.h"

static void	ucount(unsigned long long int nb, int *size)
{
	while (nb != 0)
	{
		*size += 1;
		nb /= 10;
	}
}

char		*ft_ulltoa(unsigned long long int nb)
{
	char	*str;
	int		size;

	size = 0;
	ucount(nb, &size);
	if (!(str = (char *)malloc(size)))
		return (NULL);
	str[size--] = '\0';
	while (size > -1)
	{
		str[size--] = nb % 10 + 48;
		nb /= 10;
	}
	return (str);
}
