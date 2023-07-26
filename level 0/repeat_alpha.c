/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diodos-s <diodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 08:42:55 by diodos-s          #+#    #+#             */
/*   Updated: 2023/07/26 08:57:27 by diodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int i)
{
	while (i > 0)
	{	
		write(1, &c, 1);
		i--;
	}
		
}

int	main(int argc, char **argv)
{
	int	i;
	
	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				ft_putchar_fd(argv[1][i], argv[1][i] - 'A' + 1);
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				ft_putchar_fd(argv[1][i], argv[1][i] - 'a' + 1);
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
