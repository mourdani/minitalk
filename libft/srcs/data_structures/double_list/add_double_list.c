#include "libft.h"

int		ft_add_back_double_list(t_dnode **list, t_dnode *node) //void
{
	t_dnode *tmp;

	tmp = *list;
	if (!tmp)
	{
		*list = node;
		return (EXIT_SUCCESS);
	}

	while (tmp->next)
		tmp = tmp->next;
        
	tmp->next = node;
    node->prev = tmp;
	return (EXIT_SUCCESS);
}

int		ft_add_front_double_list(t_dnode **list, t_dnode *node) //void
{
	if (!(*list))
	{
		*list = node;
		return (EXIT_SUCCESS);
	}
    
	node->next = *list;
    (*list)->prev = node;
	*list = node;
	return (EXIT_SUCCESS);
}