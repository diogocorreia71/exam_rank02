/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diodos-s <diodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 09:39:29 by diodos-s          #+#    #+#             */
/*   Updated: 2023/08/09 09:45:56 by diodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int size = (end - start);
	if (size < 0)
	{
		size *= -1;
	}
	size = size + 1;
	int *res = malloc(sizeof(int) * (size));
	if (!res)
		return NULL;
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

//#include<stdio.h>
// int main(int argc, char **argv)
// {
// 	int end;
// 	int start;
	
// 	(void)argc;
// 	start = atoi(argv[1]);
// 	end = atoi(argv[2]);
// 	int size = end - start;
// 	if (size < 0)
// 	{
// 		size *= -1;
// 	}
// 	int *res = malloc(sizeof(int) * (size + 1));
// 	if (!res)
// 		return (0);
// 	int i = -1;
// 	res = ft_rrange(start, end);
// 	while (++i <= size)
// 		printf("res[%i] = %i\n", i, res[i]);
// }

// int	main()
// {
// 	int	i;
// 	int *arr;

// 	arr = ft_rrange(0, -3);
// 	i = 0;
// 	while (i < 4)
// 	{
// 		printf("%d\n", arr[i]);
// 		i++;
// 	}
// }
