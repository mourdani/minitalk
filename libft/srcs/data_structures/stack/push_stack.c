#include "libft.h"

int		ft_push_stack(t_node **stack, t_node *to_push)
{
	return (ft_add_front_list(stack, to_push));
}
