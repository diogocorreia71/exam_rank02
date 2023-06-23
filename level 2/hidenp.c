/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diodos-s <diodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 09:16:56 by diodos-s          #+#    #+#             */
/*   Updated: 2023/06/23 09:25:43 by diodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	c;
	int		i;
	int		j;
	int		res;
	
	if (argc == 3)
	{
		i = 0;
		j = 0;
		res = 0;
		while (argv[2][i])
		{
			if(argv[2][i] == argv[1][j])
				j++;
			if(!argv[1][j])
				res = 1;
			i++;
		}
		c = res + '0';
		write(1, &c, 1);
	}
	write(1, "\n", 1);
	return (0);
}