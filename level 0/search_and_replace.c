/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diodos-s <diodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 13:00:04 by diodos-s          #+#    #+#             */
/*   Updated: 2023/06/19 13:13:21 by diodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	
	i = 0;
	if (argc == 4)
	{
		while (argv[1][i] && !argv[2][1] && !argv[3][1])
		{
			if(argv[1][i] == argv[2][0])
				write(1, argv[3][0], 1);
			else
				write(1, argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
