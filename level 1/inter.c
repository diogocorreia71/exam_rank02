/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diodos-s <diodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 11:47:34 by diodos-s          #+#    #+#             */
/*   Updated: 2023/06/21 11:58:07 by diodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	arr[256] = {0};
	
	if (argc == 3)
	{
		while (argv[1][i])
		{
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j])
				{
					if (arr[(int)argv[1][i]] == 0)
					{
						write(1, &(argv[1][i]), 1);
						arr[(int)argv[1][i]] = 1;
					}
				}
				j++;
			}
			j = 0;
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}