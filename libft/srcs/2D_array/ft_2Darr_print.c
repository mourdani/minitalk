#include "libft.h"

/*
**  Ft_2Darr_print() prints an array of strings. It works properly only when
**	the array is terminated with NULL.
*/
void	ft_2Darr_print(char **arr, char *ink)
{
	int	i;
	
	if (!arr)
		return ;
	if (!ink)
		ink = NORMAL;
	i = 0;
	while (arr[i])
	{
		ft_printf("%sarr[%d] -> \"%s\"%s\n", ink, i, arr[i], NORMAL);
		i++;
	}
}
