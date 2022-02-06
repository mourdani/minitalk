#include "libft.h"

void	ft_print_double_list(t_dnode *list, void (*fct_print)(void *))
{
	int		i;
	t_dnode	*tmp;

	i = 1;
	tmp = list;
	printf("%s\nDOUBLE LIST:\n", YELLOW);
	while (tmp)
	{
		printf("%d. p:[%p], pdata:[%p]\n", i++, tmp, tmp->data);
        if (fct_print)
			fct_print(tmp->data);
		tmp = tmp->next;
	}
	printf("%s\n", NORMAL);
}