#include "libft.h"

void	ft_remove_double_list(t_dnode **list, t_dnode *node)
{
	t_dnode	*tmp;

	tmp = *list;
	while (tmp)
	{
		if (tmp == node)
		{
			//printf("PREV: %p, curr: %p, next: %p\n", tmp->prev, tmp, tmp->next);
			if (!tmp->prev)
			{
				if (tmp->next)
					tmp->next->prev = NULL;
				*list = tmp->next;
			}
			else
				tmp->prev->next = tmp->next;
			free(tmp);
			return ;
		}
		tmp = tmp->next;
	}
}