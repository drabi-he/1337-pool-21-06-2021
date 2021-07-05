/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdrabi <hdrabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 11:06:46 by hdrabi            #+#    #+#             */
/*   Updated: 2021/07/05 10:39:29 by hdrabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(unsigned int n, char *base, unsigned int size)
{
	if (n > size - 1)
	{
		ft_print(n / size, base, size);
		n %= size;
	}
	ft_putchar(base[n]);
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

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	n;
	unsigned int	size;

	if (!ft_check_base(base))
		return ;
	if (nbr < 0)
	{
		n = -nbr;
		ft_putchar('-');
	}
	else
		n = nbr;
	size = ft_strlen(base);
	ft_print(n, base, size);
}
/*
int main(void)
{
	ft_putnbr_base(-2147483648, "0123456789");
	return (0);
}
*/
