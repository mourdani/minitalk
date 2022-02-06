#include "libft.h"
#include "libft_rbtree.h"

t_rbtree	*ft_get_sibling_rbtree(t_rbtree *node)
{
	if (!node || !NPARENT)
		return (NULL);
	printf("THERE WILL BE A SIBLING\n");
	return (NPARENT->left == node ? NPARENT->right : NPARENT->left);
}

t_rbtree	*ft_get_uncle_rbtree(t_rbtree *node)
{
	if (!node)
		return (NULL);
	return (ft_get_sibling_rbtree(NPARENT));
}