#include "libft.h"

void	ft_free_list(t_node *list, void (*fct_free)(void *))
{
	t_node *tmp;

	while (list)
	{
		tmp = list;
		list = list->next;
		if (fct_free)
			fct_free(tmp->data);
		free(tmp);
	}
}
