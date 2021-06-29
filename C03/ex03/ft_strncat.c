/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdrabi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 16:37:59 by hdrabi            #+#    #+#             */
/*   Updated: 2021/06/29 18:26:52 by hdrabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				dest_size;

	i = 0;
	dest_size = 0;
	while (dest[dest_size])
	{
		dest_size++;
	}
	while (src[i] && i < nb)
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (dest);
}
/*
int main()
{
	char src[] = "hello";
	char dest[] = "world";

	ft_strncat(dest,src,5);
	return 0;
}
*/
