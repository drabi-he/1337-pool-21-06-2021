/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdrabi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 13:41:09 by hdrabi            #+#    #+#             */
/*   Updated: 2021/06/24 14:08:27 by hdrabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(int n)
{
	write(1, &n, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 100)
	{
		j = i + 1;
		while (j < 100)
		{
			ft_putchar(i / 10 + 48);
			ft_putchar(i % 10 + 48);
			ft_putchar(32);
			ft_putchar(j / 10 + 48);
			ft_putchar(j % 10 + 48);
			if (i == 98)
				return ;
			ft_putchar(44);
			ft_putchar(32);
			j++;
		}
		i++;
	}	
}
