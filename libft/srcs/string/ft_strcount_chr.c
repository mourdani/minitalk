#include <stdio.h>

int     ft_strcount_chr(char *str, char chr)
{
    int count;
    int i;
    
    if (!str)
        return (-1);
    i = 0;
    count = 0;
    while (str[i])
    {
        if (str[i] == chr)
            count++;
        i++;
    }
    return (count);
}