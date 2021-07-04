/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdrabi <hdrabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 11:06:46 by hdrabi            #+#    #+#             */
/*   Updated: 2021/07/04 15:26:18 by hdrabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

unsigned int	ft_check_base(char *base)
{
	int	base_size;
	int	j;

	base_size = 0;
	while (base[base_size])
	{
		if (base[base_size] == '-' || base[base_size] == '+'
			|| base[base_size] <= ' ' || base[base_size] == 127)
			return (0);
		j = base_size + 1;
		while (base[j])
		{
			if (base[base_size] == base[j])
			{
				return (0);
			}
			j++;
		}
		base_size++;
	}
	if (base_size <= 1)
		return (0);
	return (base_size);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	check_base;
	unsigned int	nb;

	check_base = ft_check_base(base);
	if (!check_base)
		return ;
	if (nbr < 0)
		ft_putchar('-');
	nb = (unsigned int)nbr;
	if (nb < check_base)
		ft_putchar(base[nb]);
	else
	{
		ft_putnbr_base(nb / check_base, base);
		ft_putchar(base[nb % check_base]);
	}
}
/*
int main(void)
{
	ft_putnbr_base(-2147483648, "0123456789");
	return (0);
}
*/
