/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diodos-s <diodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:33:06 by diodos-s          #+#    #+#             */
/*   Updated: 2023/08/01 15:42:10 by diodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int res;
	int i;
	int j;
	char c;

	if (argc == 3)
	{
		i = 0;
		j = 0;
		res = 0;
		while (argv[2][i])
		{
			if (argv[2][i] == argv[1][j])
				j++;
			if (!argv[1][j])
				res = 1;
			i++;
		}
		c = res + 48;
		write(1, &c, 1);
	}
	write(1, "\n", 1);
}
