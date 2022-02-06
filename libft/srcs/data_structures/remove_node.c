#include "libft.h"

void	remove_node(t_queue **queue, t_node *prev, t_node *remove)
{
	if (!prev)
		(*queue)->first = remove->next;
	else
		prev->next = remove->next;
}
