/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diodos-s <diodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 11:37:39 by diodos-s          #+#    #+#             */
/*   Updated: 2023/06/21 11:45:28 by diodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	int	i;
	int	j;
	
	i = 0;
	while (accept[i])
	{
		j = 0;
		while (s[j] && accept[i])
		{
			if (s[j] == accept[i])
			{
				i = 0;
				j++;
			}
			i++;
		}
	}
	return (j);
}