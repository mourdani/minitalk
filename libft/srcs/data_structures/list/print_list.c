#include "libft.h"

void	ft_print_list(t_node *list, void (*fct_print)(void *))
{
	int		i;
	t_node	*tmp;

	i = 1;
	tmp = list;
	printf("%s\nLIST:\n", YELLOW);
	while (tmp)
	{
		printf("%d. p:[%p], pdata:[%d]\n", i++, tmp, tmp->data);
		if (fct_print)
			fct_print(tmp->data);
		tmp = tmp->next;
	}
	printf("%s\n", NORMAL);
}
