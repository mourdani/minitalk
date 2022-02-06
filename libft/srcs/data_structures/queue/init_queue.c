#include "libft.h"

t_queue		*ft_init_queue(void)
{
	t_queue *queue;

	if (!(queue = ft_memalloc(sizeof(t_queue))))
		return (NULL);
	queue->first = NULL;
	queue->last = NULL;
	return (queue);
}

