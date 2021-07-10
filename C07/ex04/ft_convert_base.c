/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdrabi <hdrabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 12:34:24 by hdrabi            #+#    #+#             */
/*   Updated: 2021/07/10 17:09:18 by hdrabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	allocsign(int n, int *i);

int	ft_check_in_base(char c, char *base)
{
	int	i;

	i = -1;
	while (base[++i])
		if (c == base[i])
			return (i);
	return (-1);
}

int	ft_check_base(char *base)
{
	int	size;

	size = -1;
	while (base[++size])
	{
		if (base[size] == '+' || base[size] == '-' || base[size] <= 32
			|| base[size] == 127
			|| ft_check_in_base(base[size], base + size + 1) != -1)
			return (0);
	}
	if (size < 2)
		return (0);
	return (size);
}

int	ft_atoi_base(char *str, char *base, int size)
{
	int	minus;
	int	rst;

	rst = 0;
	minus = 1;
	if (size < 2)
		return (0);
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			minus *= -1;
		str++;
	}
	while (ft_check_in_base(*str, base) != -1)
	{
		rst = rst * size + ft_check_in_base(*str, base);
		str++;
	}
	return (rst * minus);
}

int	ft_nbrlen(unsigned int n, unsigned int base_size)
{
	if (n < base_size)
		return (1);
	return (1 + ft_nbrlen(n / base_size, base_size));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char			*t;
	unsigned int	nb;
	int				i;
	int				from;
	int				to;

	from = ft_check_base(base_from);
	to = ft_check_base(base_to);
	if (!(from && to))
		return (NULL);
	from = ft_atoi_base(nbr, base_from, from);
	nb = allocsign(from, &i);
	i += ft_nbrlen(nb, to);
	t = malloc(sizeof(char) * (i + 1));
	if (!t)
		return (NULL);
	t[i] = 0;
	while (i--)
	{
		t[i] = base_to[nb % to];
		nb /= to;
	}
	if (from < 0)
		t[0] = '-';
	return (t);
}
/*
int main(void)
{
	char *nbr = "      ---000000000000123";
	char *base_from = "0123456789";
	char *base_to = "0123456789";

	printf("%s", ft_convert_base(nbr, base_from, base_to));
	return (0);
}
*/
