#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	int		i;
	int		len;
	int		sign;
	long	cpy;
	char	*res;
	long	copy;

	i = 0;
	len = 0;
	sign = 0;
	cpy = nbr;
	copy = nbr;
	if (cpy < 0)
	{
		cpy *= -1;
		sign = 1;
	}
	while (cpy > 9)
	{
		len++;
		cpy /= 10;
	}
	len++;
	res = malloc(sizeof(char) * len + 1 + sign);
	if (!res)
		return (NULL);
	res[len + sign] = '\0';
	if (sign == 1)
	{
		res[0] = '-';
		copy *= -1;
		i++;
		len += 1;
	}
	while (copy != 0)
	{
		len--;
		res[len] = copy % 10 + 48,
		copy = copy / 10;
	}
	return (res);
}