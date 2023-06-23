/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diodos-s <diodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 12:14:59 by diodos-s          #+#    #+#             */
/*   Updated: 2023/06/22 12:20:16 by diodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int size = abs(end - start) + 1;
	int *res = malloc(sizeof(int) * size);
	if (!res)
		return NULL;
	int i = 0;
	if (start > end)
	{
		while (start >= end)
		{
			res[i] = start;
			start -= 1;
			i++;
		}
	}
	else
	{
		while (start <= end)
		{
			res[i] = start;
			start += 1;
			i++;
		}
	}
	return (res);
}