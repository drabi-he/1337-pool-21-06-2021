/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdrabi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 13:19:46 by hdrabi            #+#    #+#             */
/*   Updated: 2021/06/25 11:10:50 by hdrabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_print_numbers(int i, int j, int k)
{
	char	c;
	char	sp;

	c = ',';
	sp = ' ';
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, &k, 1);
	if (k == 57 && k - j == 1 && j - i == 1)
		return ;
	write(1, &c, 1);
	write(1, &sp, 1);
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 48;
	while (i <= 57)
	{
		j = i + 1;
		while (j <= 57)
		{
			k = j + 1;
			while (k <= 57)
			{
				ft_print_numbers(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}
