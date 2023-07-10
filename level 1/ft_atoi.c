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

int		ft_atoi(const char *str)
{
	int	number;
	int sign;
	
	number = 0;
	sign = 1;
	while ((*str == '\n') || (*str == ' ') || (*str == '\t')
				|| (*str == '\v') || (*str == '\f') || (*str == '\r'))
			str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		str++;
		sign = -1;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		number *= 10;
		number += *str - '0';
		str++;
	}
	number *= sign;
	return (number);
}
