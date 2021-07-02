/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdrabi <hdrabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 10:20:15 by hdrabi            #+#    #+#             */
/*   Updated: 2021/07/02 10:34:36 by hdrabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	rst;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	rst = 1;
	while (nb >= 1)
	{
		rst *= nb;
		nb--;
	}
	return (rst);
}
/*
int main()
{
	printf("%d",ft_iterative_factorial(4));
    return (0);
}
*/
