/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diodos-s <diodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 11:42:45 by diodos-s          #+#    #+#             */
/*   Updated: 2023/06/22 11:48:21 by diodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	flag;

	if (argc == 2)
	{
		i = 0;
		flag = 0;
		while (argv[1][i])
		{
			while (argv[1][i] && argv[1][i] != '\t' && argv[1][i] != ' ')
			{
				flag = write(1, &argv[1][i], 1);
				i++;
			}
			while (argv[1][i] && (argv[1][i] == '\t' || argv[1][i] == ' ' ))
				i++;
			if (argv[1][i] && flag)
				write(1, "   ", 3);
		}
	}
	write(1, "\n", 1);
	return (0);
}