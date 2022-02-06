#include "libft.h"

t_node		*ft_init_node(void *data, size_t dsize)
{
	t_node	*new;

	if (!(new = ft_memalloc(sizeof(t_node))))
		return (NULL);
	new->data = data;
	new->d_size = dsize;
	new->next = NULL;
	return (new);
}
