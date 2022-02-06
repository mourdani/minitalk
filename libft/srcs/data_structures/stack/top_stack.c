#include "libft.h"

void	*ft_top_stack(t_node *stack)
{
	if (!stack)
		return (NULL);
	return (stack->data);
}
