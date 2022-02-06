#include "libft.h"
#include "libft_rbtree.h"

t_rbtree	*ft_create_rbtree(void *data)
{
	t_rbtree *new;

	new = (t_rbtree *)malloc(sizeof(t_rbtree));
	ft_bzero(new, sizeof(t_rbtree));
	new->data = data;
	new->color = RBRED;
	return (new);
}
