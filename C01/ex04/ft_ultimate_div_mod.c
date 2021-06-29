/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdrabi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 17:35:46 by hdrabi            #+#    #+#             */
/*   Updated: 2021/06/26 17:38:38 by hdrabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int	*a, int *b)
{
	int	tmp;

	tmp = *a / *b;
	*b = *a % *b;
	*a = tmp;
}
