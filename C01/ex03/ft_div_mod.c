/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdrabi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 17:29:38 by hdrabi            #+#    #+#             */
/*   Updated: 2021/06/26 17:30:46 by hdrabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int	a, int	b, int	*div, int	*mod)
{
	*div = a / b;
	*mod = a % b;
}
