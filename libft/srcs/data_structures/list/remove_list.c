#include "libft.h"

void	ft_remove_list(t_node **list, t_node *node)
{
	t_node	*tmp;
	t_node	*prev;

	tmp = *list;
	prev = NULL;
	while (tmp)
	{
		if (tmp == node)
		{
			if (prev == NULL)
				*list = tmp->next;
			else
				prev->next = tmp->next;
			free(tmp);
			return ;
		}
		prev = tmp;
		tmp = tmp->next;
	}
}
