/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diodos-s <diodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 10:20:33 by diodos-s          #+#    #+#             */
/*   Updated: 2023/06/23 10:56:08 by diodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_tolower(char c)
{
	if (c >= 'A' && c <= 'Z')
		c =+ 32;
	return (c);
}

int	ft_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		char	c;
		int		i;
		int		j;
		
		i = 0;
		while (argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				if (argv[i][j] != '\t' && argv[i][j] != ' ' && (argv[i][j+1] == '\t' || argv[i][j+1] == ' ' || argv[i][j+1] == '\0'))
				{
					c = ft_toupper(argv[i][j]);
					write(1, &c, 1);
				}
				else
				{
					c = ft_tolower(argv[i][j]);
					write(1, &c, 1);
				}
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
}