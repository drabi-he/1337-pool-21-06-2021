/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdrabi <hdrabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 10:37:53 by hdrabi            #+#    #+#             */
/*   Updated: 2021/07/05 19:11:57 by hdrabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt(int nb)
{
	int i;

	i = 0;
	if (nb == 1)
		return (1);
	while (i <= 46340)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

int main()
{
	printf("%d\n", ft_sqrt(1986306624));

	return 0;
}
