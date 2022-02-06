#include "libft.h"

void	ft_free_double_list(t_dnode *list, void (*fct_free)(void *))
{
	t_dnode *tmp;

	while (list)
	{
		tmp = list;
		list = list->next;
		if (fct_free)
			fct_free(tmp->data);
		free(tmp);
	}
}