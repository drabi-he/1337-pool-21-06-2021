/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdrabi <hdrabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 11:09:33 by hdrabi            #+#    #+#             */
/*   Updated: 2021/07/04 15:41:27 by hdrabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1 || (nb % 2 == 0 && nb != 2))
		return (0);
	if (nb == 2)
		return (1);
	i = 3;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}
/*
int main()
{
	for (int i = 0; i <= 100; i++)
	{
		printf("is %d prime ? %d\n", i, ft_is_prime(i));
	}
	return 0;
}
*/
