/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diodos-s <diodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 11:40:21 by diodos-s          #+#    #+#             */
/*   Updated: 2023/06/19 11:53:05 by diodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_number(int i)
{
	int	j;
	
	j = 0;
	if (j > 9)
	{
		j = (i / 10) + 48;
		write(1, &j, 1);
		j = (i % 10) + 48;
		write(1, &j, 1);
	}
	else
	{
		j = i + 48;
		write(1, &j, 1);
	}
}

int	main(void)
{
	int	i;

	i = 0;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else 
			write_number(i);
		write(1, "\n", 1);
		i++;
	}
}