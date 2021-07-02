/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdrabi <hdrabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 10:43:53 by hdrabi            #+#    #+#             */
/*   Updated: 2021/07/02 12:58:01 by hdrabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	rst;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	rst = nb;
	while (power > 1)
	{
		rst *= nb;
		power--;
	}
	return (rst);
}
/*
int main()
{
    printf("%d",ft_iterative_power(10,3));
    return (0);
}
*/
