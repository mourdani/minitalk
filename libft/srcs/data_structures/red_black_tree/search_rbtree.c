#include "libft.h"
#include "libft_rbtree.h"

t_rbtree	*ft_search_rbtree(t_rbtree *root, t_rbtree *node, int (*fct)(void *, void *))
{
	t_rbtree	*tptr;
	
	tptr = root;
	while (tptr)
	{
		if (fct(tptr->data, node->data))
		{
			if (!tptr->left)
				return (tptr);
			tptr = tptr->left;
		}
		else
		{
			if (!tptr->right)
				return (tptr);
			tptr = tptr->right;
		}
	}
	return (tptr);
}

t_rbtree	*ft_search_successor_rbtree(t_rbtree *root)
{
	t_rbtree	*tptr;
	
	if (!(tptr = root))
		return (NULL);
	tptr = tptr->right;
	while (tptr)
	{
		if (!tptr->left)
			return (tptr);
		tptr = tptr->left; 
	}
	return (tptr);
}