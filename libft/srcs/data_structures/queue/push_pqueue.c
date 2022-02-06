#include "libft.h"

void		ft_push_pqueue(t_queue **head, t_node *new, int (*fct)(t_node *, t_node *))
{
	t_node 	*tmp;

	if (!fct)
	{
		ft_push_queue(head, new);
		return ;
	}
	if (!(*head) || !new)
		return ;
	tmp = (*head)->first;

	if (!tmp || !tmp->data || fct(tmp, new))
	{
		new->next = tmp;
		(*head)->first = new;
	}
	else
	{
		while (tmp->next && !(fct(tmp->next, new)))
			tmp = tmp->next;
		new->next = tmp->next;
		tmp->next = new;
	}
}
