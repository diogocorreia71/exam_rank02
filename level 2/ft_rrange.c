/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diodos-s <diodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 12:25:37 by diodos-s          #+#    #+#             */
/*   Updated: 2023/06/22 12:28:22 by diodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int size = abs(end - start) + 1;
	int *res = malloc(sizeof(int) * size);
	int i = 0;
	if (start > end)
	{
		while (start >= end)
		{
			res[i] = end;
			end += 1;
			i++;
		}
	}
	else
	{
		while (start <= end)
		{
			res[i] = end;
			end -= 1;
			i++;
		}
	}
	return (res);
}