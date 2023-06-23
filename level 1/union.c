/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diodos-s <diodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 09:45:07 by diodos-s          #+#    #+#             */
/*   Updated: 2023/06/22 09:57:40 by diodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	arr[256] = {0};

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			if(arr[(int)argv[1][i]] == 0)
			{
				write(1, &(argv[1][i]), 1);
				arr[(int)argv[1][i]] = 1;
			}
			i++;
		}
		i = 0;
		while (argv[2][i])
		{
			if (arr[(int)argv[2][i]] == 0)
			{
				write(1, &(argv[2][i]), 1);
				arr[(int)argv[2][i]] = 1;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}