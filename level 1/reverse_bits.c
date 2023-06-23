/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diodos-s <diodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 09:01:47 by diodos-s          #+#    #+#             */
/*   Updated: 2023/06/22 09:06:47 by diodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	int	i;
	unsigned char	res;

	i = 8;
	res = 0;
	while (i > 0)
	{
		res = res * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (res);
}

// #include <stdio.h>
// int main(void)
// {
//     unsigned char octet = 60;
    
//     printf("\nOriginal octet: %u\n", octet);
    
//     unsigned char reversed = reverse_bits(octet);
    
//     printf("Reversed octet: %u\n\n", reversed);

// 	octet = 61;
    
//     printf("Original octet: %u\n", octet);
    
//     reversed = reverse_bits(octet);
    
//     printf("Reversed octet: %u\n\n", reversed);
    
//     return 0;
// }