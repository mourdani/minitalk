int		ft_count_words(char *str)
{
	int		i;
	int		words;

	i = 0;
	words = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\v'))
			i++;
		if (str[i])
			words += 1;
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\v')
			i++;
	}
	return (words);
}