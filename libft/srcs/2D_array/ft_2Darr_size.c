#include "libft.h"

/*
**  Ft_2Darr_size() caluculates the size of 2D. It works properly only when
**	the array is terminated with NULL.
*/
int ft_2Darr_size(char **arr)
{
    int     i;
    
    if (!arr)
        return (-1);
    i = 0;
    while (arr[i] != NULL)
        i++;
    return (i);
}