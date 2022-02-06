#include "libft.h"

void		*ft_top_queue(t_queue *queue)
{
	if (queue && queue->first)
		return (queue->first->data);
	return (NULL);	
}
