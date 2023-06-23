/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diodos-s <diodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 09:54:26 by diodos-s          #+#    #+#             */
/*   Updated: 2023/06/23 10:05:00 by diodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	a;
	int	b;
	int	n;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		if (a > b)
			n = a;
		else
			n = b;
		while (n);
		{
			if (a % n == 0 && b % n == 0)
				return (printf("%i\n", n));
			n--;
		}
	}
	printf("\n");
}