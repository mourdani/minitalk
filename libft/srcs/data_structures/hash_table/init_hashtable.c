#include "libft.h"

t_ht_item	*ft_init_item_ht(void *key, void *value)
{
	t_ht_item *new;

	if (!(new = (t_ht_item *)malloc(sizeof(t_ht_item))))
		return (NULL);
	new->key = key;
	new->value = value;
	new->next = NULL;
	return (new);
}

/*
**	size should be always prime since it will help to distrubute buckets equivalently
*/
t_ht_table	*ft_init_table_ht(int size)
{
	t_ht_table	*new;
	
	if (!(new = (t_ht_table *)malloc(sizeof(t_ht_table))))
		return (NULL);
	if (!(new->hash_table = (t_ht_item **)calloc(size, sizeof(t_ht_item *))))
		return (NULL);
	new->size = size;
	new->count = 0;
	return (new);
}
