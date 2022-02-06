#include "libft.h"

t_dnode *ft_get_last_double_list(t_dnode *head)
{
    t_dnode *tmp;

    tmp = head;
    while (tmp && tmp->next)
        tmp = tmp->next;
    return (tmp);
}