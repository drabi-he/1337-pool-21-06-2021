/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdrabi <hdrabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 11:29:18 by hdrabi            #+#    #+#             */
/*   Updated: 2021/07/03 11:49:19 by hdrabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb == 2)
		return (nb);
	if (nb % 2 == 0)
		return (ft_find_next_prime(nb + 1));
	i = 2;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (ft_find_next_prime(nb + 2));
		i++;
	}
	return (nb);
}
/*
int main()
{
    printf("%d",ft_find_next_prime(91));
    return 0;
}
*/
