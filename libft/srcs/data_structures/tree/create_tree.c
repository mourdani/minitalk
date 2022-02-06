#include "libft.h"

t_btree     *ft_create_tree(void *data)
{
	t_tree *new;

	if (!(new = (t_rbtree *)malloc(sizeof(t_rbtree))))
        return (NULL);
	ft_bzero(new, sizeof(t_rbtree));
	new->data = data;
	return (new);
}