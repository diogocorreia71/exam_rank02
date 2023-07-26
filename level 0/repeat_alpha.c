/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diodos-s <diodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 12:09:26 by diodos-s          #+#    #+#             */
/*   Updated: 2023/06/19 12:30:17 by diodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int i)
{
	while (i > 0)
	{
		write(1, &c, 1);
		--i;
	}
}

void	repeat_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			ft_putchar_fd(str[i], str[i] + 1 - 'a');
		else if (str[i] >= 'A' && str[i] <= 'Z')
			ft_putchar_fd(str[i], str[i] + 1 - 'A');
		else
			write(1, str, 1);
		++str;
	}
}

int	main(int argc, char **argv)
{
	while (argc == 2)
	{
		repeat_alpha(argv[1]);		
	}
	write(1, "\n", 1);
	return (0);
}
