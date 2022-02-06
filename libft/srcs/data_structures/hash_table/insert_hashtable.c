#include "libft.h"

/*
**	Function ft_insert_ht() inserts an item to hash table. First it calls ft_hash_ht() to get a hash of an item, then
**	add it to the hash table on 'pos' index. If table[pos] is occupied, item is
**	added at the end on linked list created at 'pos' index.
*/
int		ft_insert_ht(t_ht_table *table, t_ht_item *item, int (*fcmp)(void *, void *))
{
	t_ht_item	*open_spot;
	int			pos;

	if (!table || !table->hash_table || !item)
		return (EXIT_FAILURE);
	pos = ft_hash_ht(item->key, table->size);
	if (!table->hash_table[pos])
		table->hash_table[pos] = item;
	else
	{
		// printf("y?\n")
		open_spot = table->hash_table[pos];
		while (open_spot)
		{
			if (!fcmp(open_spot->key, item->key))
				return (EXIT_FAILURE);
			if (!open_spot->next)
				break;
			open_spot = open_spot->next;
		}
		open_spot->next = item;
	}	
	table->count++;
	return (EXIT_SUCCESS);
}