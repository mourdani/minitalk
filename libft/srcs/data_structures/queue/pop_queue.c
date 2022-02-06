#include "libft.h"

t_node	*ft_pop_queue(t_queue **queue)
{
	t_node *tmp;

	if (!(*queue) || !(*queue)->first)
		return (NULL);

	tmp = (*queue)->first;
	(*queue)->first = tmp->next;
	return (tmp);
}
