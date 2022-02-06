#include "libft.h"

/*
**	Ft_putendl_fd() writes a string to specified fd followed by a newline.
*/
void	ft_putendl_fd(char *s, int fd)
{
	int i;

	i = 0;
	while (s[i])
		ft_putchar_fd(s[i++], fd);
	ft_putchar_fd('\n', fd);
}
