#include "libft.h"

/*
**  Ft_2Darr_free() frees an array of strings. It works properly only when
**	the array is terminated with NULL.
*/
void	ft_2Darr_free(char **arr)
{
	int i;
	
	if (!arr)
		return ;
	i = 0;
	while (arr[i])
		free(arr[i++]);
	free(arr);
}