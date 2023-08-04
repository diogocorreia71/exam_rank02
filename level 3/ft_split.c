/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diodos-s <diodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 09:20:06 by diodos-s          #+#    #+#             */
/*   Updated: 2023/08/04 10:28:20 by diodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_isspace(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

int		count_words(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		// move to the beggining of a new word
		while (*str && ft_isspace(*str))
			str++;
		if (*str && !ft_isspace(*str))
		{
			count++;
			// move to the next whitespace
			while (*str && !ft_isspace(*str))
				str++;
		}
	}
	return (count);
}

char	*malloc_word(char *str)
{
	char *word;
	int	i;

	i = 0;
	while (str[i] && !ft_isspace(str[i]))
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (str[i] && !ft_isspace(str[i]))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str)
{
	char **arr = (char **)malloc(sizeof(char *) * (count_words(str) + 1));

	// same as count_words, except we save word to array instead of counting
	int i = 0;
	while (*str)
	{
		// move to the beggining of a new word
		while (*str && ft_isspace(*str))
			str++;
		if (*str && !ft_isspace(*str))
		{
			// save word to array
			arr[i] = malloc_word(str);
			i++;
			// move to the next whitespace
			while (*str && !ft_isspace(*str))
				str++;
		}
	}
	arr[i] = NULL;
	return (arr);
}


// V 2.0

#include <stdlib.h>

char    **ft_split(char *str)
{
    char **split;
    int i = 0;
    int row = 0;
    int column;

    split = (char **)malloc(sizeof(char *) * 256);
    if(!split)
        return 0;
    while (str[i] == ' ' || str[i] == '\t' || str[i] =='\n')
        i++;
    while(str[i] != '\0')
    {
        column = 0;
        split[row] = malloc(sizeof(char) * 4000);
        if(!split[row])
            return 0;
        while(str[i] != ' ' && str[i] != '\t' && str[i] !='\n' && str[i])
        {
            split[row][column] = str[i];
            column++;
            i++;
        }
        split[row][column] = '\0';
        while (str[i] == ' ' || str[i] == '\t' || str[i] =='\n')
            i++;
        row++;
    }
    split[row] = NULL;
    return(split);
}
