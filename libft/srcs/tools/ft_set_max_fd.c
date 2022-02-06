#include "libft.h"

void	ft_set_max_fd(int *maxfd, int newfd)
{
	if (*maxfd < newfd)
			*maxfd = newfd;
}
