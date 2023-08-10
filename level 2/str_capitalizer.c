/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diodos-s <diodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 09:00:06 by diodos-s          #+#    #+#             */
/*   Updated: 2023/08/10 10:00:41 by diodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	write(1, &c, 1);
}

void ft_tolower(char c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int i;
	int j;

	if (argc > 1)
	{
		j = 1;
		while (argv[j])
		{
			i = 0;
			while (argv[j][i])
			{
				if ((i == 0 || argv[j][i-1] == ' ') && argv[j][i] != ' ')
					ft_toupper(argv[j][i]);
				else
					ft_tolower(argv[j][i]);
				i++;
			}
			j++;
			write(1, "\n", 1);
		}
	}
	else
		write(1, "\n", 1);
}
