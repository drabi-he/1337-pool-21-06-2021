/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdrabi <hdrabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 12:36:48 by hdrabi            #+#    #+#             */
/*   Updated: 2021/07/06 15:06:14 by hdrabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
void	ft_concta(char *dest, char src)
{
	int	i;
	int	dest_size;

	i = 0;
	dest_size = 0;
	while (dest[dest_size])
		dest_size++;
	dest[dest_size] = src;
	dest[dest_size + 1] = '\0';
}

void	ft_print(unsigned int n, char *base, unsigned int size, char *nbr2)
{
	if (n > size - 1)
	{
		ft_print(n / size, base, size, nbr2);
		n %= size;
	}
	ft_concta(nbr2, base[n]);
}

int	ft_strlen(char *base)
{
	unsigned int	i;

	i = 0;
	while (*base++)
	{
		i++;
	}
	return (i);
}

unsigned int	ft_check_base(char *base)
{
	unsigned int	i;

	if (ft_strlen(base) < 2)
		return (0);
	if (*base == '-' || *base == '+' || *base <= 32 || *base == 127)
		return (0);
	while (*base)
	{
		i = 1;
		while (base[i])
		{
			if (*base == base[i] || base[i] == '-' || base[i] == '+'
				|| base[i] <= 32 || base[i] == 127)
				return (0);
			i++;
		}
		base++;
	}
	return (1);
}

int	ft_base_index(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i] && base[i] != c)
		i++;
	return (i);
}
