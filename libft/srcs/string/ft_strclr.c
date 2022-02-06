#include "libft.h"

void	ft_strclr(char *str)
{
	if (str)
		ft_memset(str, '\0', ft_strlen(str));
}
