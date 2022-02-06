
#include "libft.h"

void	ft_free_item_ht(t_ht_item *item)
{
	free(item->key);
	free(item->value);
	free(item);
}

void	ft_free_ht(t_ht_table *table)
{
	t_ht_item	*item;
	t_ht_item	*prev;
	int			i;
	
	if (!table)
		return ;
	
	i = 0;
	while (i < table->size)
	{
		item = table->hash_table[i];
		while (item)
		{
			prev = item;
			item = item->next;
			ft_free_item_ht(prev);
		}
		i++;
	}
	free(table->hash_table);
	free(table);
}
