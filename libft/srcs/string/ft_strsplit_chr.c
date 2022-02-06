#include "libft.h"

char    **ft_strsplit_chr(char *str, char c)
{
    int     i;
    int     len;
    int     offset;
    int     occurances;
    char    **split;
    
    if (!str || ((occurances = ft_strcount_chr(str, c)) == -1) ||
        (split = (char **)malloc(sizeof(char *) * (occurances + 2))) == NULL)
        return (NULL);
    i = 0;
    offset = 0;
    while (i < occurances + 1)
    {
        len = ft_strlen_chr(&str[offset], c);
        if ((split[i] = ft_strncpy(&str[offset], len)) == NULL)
        {
            while (i-- > -1)
                free(split[i]);
            free(split);
            return (NULL);
        }
        offset += len + 1;
        i++;
    }
    split[i] = NULL;
    return (split);
}