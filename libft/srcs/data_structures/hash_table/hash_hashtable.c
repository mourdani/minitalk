#include "libft.h"

static int	ft_pow(int a, int b)
{
	while (b)
		a *= b--;
	return (a);
}

static int	ft_create_hash_ht(void *value, int base, int size)
{
	long long	hash;
	char		*str;
	int			len;
	int			i;

	i = 0;
	hash = 0;
	str = (char *)value;
	len = ft_strlen(str);
	while (str[i])
	{
		hash += (long)ft_pow(base, len - (i + 1)) * str[i];
		hash %= size;
		i++;
	}
	return ((int)hash);
}

int			ft_hash_ht(void *value, int size)
{
	int		hash;

	hash = ft_create_hash_ht(value, HASH_BASE, size);
	hash += (ft_create_hash_ht(value, HASH_BASE2, size));
	return (hash % size);
}
