#include "libft.h"

t_node	*ft_pop_stack(t_node **stack)
{
	t_node	*tmp;

	if (!(tmp = *stack))
		return (NULL);
	*stack = tmp->next;
	return (tmp);
}
