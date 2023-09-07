/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diodos-s <diodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 10:44:11 by diodos-s          #+#    #+#             */
/*   Updated: 2023/06/22 11:52:51 by diodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 0;
		int flag = 0;
		while (argv[1][i])
		{
			while (argv[1][i] == ' ' || argv[1][i] == '\t')
				i++;
			if (argv[1][i] && flag)
				write(1, " ", 1);
			while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
			{
				flag = write(1, &argv[1][i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
}
