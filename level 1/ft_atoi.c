/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diodos-s <diodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 10:31:00 by diodos-s          #+#    #+#             */
/*   Updated: 2023/06/21 10:38:54 by diodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i])
	{
		if ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			i++;
		if (str[i] == '-')
		{
			sign = -1;
			i++;
		}
		else if (str[i] == '+')
			i++;
		while (str[i] >= '0' && str[i] <= '9')
		{
			res = res * 10 + (str[i] - '0');
			i++;
		}
	}
	return (res * sign);
}
