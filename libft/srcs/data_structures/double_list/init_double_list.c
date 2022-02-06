#include "libft.h"

t_dnode		*ft_init_double_list(void *data, size_t dsize)
{
	t_dnode	*new;

	if (!(new = (t_dnode *)malloc(sizeof(t_dnode))))
		return (NULL);
	new->data = data;
	new->d_size = dsize;
	new->next = NULL;
    new->prev = NULL;
	return (new);
}