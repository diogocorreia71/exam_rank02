/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diodos-s <diodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 08:58:00 by diodos-s          #+#    #+#             */
/*   Updated: 2023/06/26 09:05:24 by diodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	flag;
	int	flag2;

	i = 0;
	flag = 0;
	flag2 = 0;
	if (argc > 1)
	{
		while (argv[1][i])
		{
			while (argv[1][i] == ' ')
				i++;
			if (argv[1][i] && flag > 1)
				write(1, " ", 1);
			while (argv[1][i] && argv[1][i] != ' ' && !flag)
				i++;
			flag = 1;
			while (argv[1][i] && argv[1][i] != ' ')
				flag += write(1, &argv[1][i++], 1);
			if (flag2)
				break ;
			if (!argv[1][i])
				i = flag2++;
		}
	}
	write(1, "\n", 1);
	return (0);
}