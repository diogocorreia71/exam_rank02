/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diodos-s <diodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 09:43:51 by diodos-s          #+#    #+#             */
/*   Updated: 2023/06/23 09:52:34 by diodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)
{
	char	c;
	
	if (n > 9)
		ft_putnbr(n / 10);
	c = n % 10 + 48;
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	if(!argv[1])
		return (write(1, "0\n", 2));
	ft_putnbr(argc - 1);
	write(1, "\n", 1);
}