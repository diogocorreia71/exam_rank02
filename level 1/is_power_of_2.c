/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diodos-s <diodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 10:39:25 by diodos-s          #+#    #+#             */
/*   Updated: 2023/08/01 10:47:33 by diodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	    is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n % 2 == 0)
		n /= 2;
	if (n == 1)
		return (1);
	return (0);
}
