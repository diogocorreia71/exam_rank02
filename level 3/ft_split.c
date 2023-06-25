#include <stdlib.h>

char	*put_word(char *str)
{
	int	i;
	char	*res;

	i = 0;
	while (!is_space(str[i]) && str[i])
		i++;
	res = (char *)malloc(sizeof(char) * (i + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (str[i] != '\0' && !is_space(str[i]))
	{
		res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

int	is_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

int	count_words(char *str)
{
	int	res;

	res = 0;
	while (*str)
	{
		if (!is_space(*str))
		{
			res++;
			while (!is_space(*str) && *str)
				str++;
		}
		else
			str++;
	}
	return (str);
}

char	**ft_split(char *str)
{
	char	**words;
	int				i;

	words = (char **)malloc(sizeof(char *) * (count_words(str) + 1));
	if (!words)
		return (NULL);
	i = 0;
	while (*str)
	{
		if (!is_space(*str))
		{
			words[i] = put_word(str);
			i++;
			while (!is_space(*str) && *str)
				str++;
		}
		else
			str++;
	}
	words[i] = NULL;
	return (words);
}