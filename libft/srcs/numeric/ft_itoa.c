#include "libft.h"

char	*ft_itoa(int nbr)
{
	int			sign;
	int			count;
	static char	str[12];

	count = 1;
	sign = nbr;
	while (sign /= 10)
		count++;
	sign = nbr < 0 ? 1 : 0;
	if (nbr < 0)
		count += 1;
	str[count] = '\0';
	if (nbr == -2147483648)
		return ("-2147483648");
	if (sign == 1)
		str[0] = '-';
	if (nbr < 0)
	       	nbr *= -1;
	while (--count >= sign)
	{
		str[count] = nbr >= 10 ? (nbr % 10) + 48 : nbr + 48;
		nbr /= 10;
	}
	return (str);
}
