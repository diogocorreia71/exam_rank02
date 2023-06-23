/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diodos-s <diodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 09:35:18 by diodos-s          #+#    #+#             */
/*   Updated: 2023/06/22 09:44:05 by diodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	swap_bits(unsigned char octet)
{
	return (octet >> 4 | octet << 4);
}

#include <stdio.h>

int	main(void)
{
	char a = 2;
	char b = swap_bits(a);
	printf("%04d | %04d\n", (a >> 4) & 0x0F, a & 0x0F);
	printf("%04d | %04d\n", (b >> 4) & 0x0F, b & 0x0F);
}