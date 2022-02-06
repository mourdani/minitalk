#include "libft.h"

/*
**	Ft_putchar_fd() writes a charater to specified fd.
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
