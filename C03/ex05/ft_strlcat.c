/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdrabi <hdrabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 11:53:22 by hdrabi            #+#    #+#             */
/*   Updated: 2021/07/03 13:28:35 by hdrabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_size;
	unsigned int	src_size;
	unsigned int	i;
	unsigned int	rst;

	dest_size = 0;
	while (dest[dest_size])
		dest_size++;
	src_size = 0;
	while (src[src_size])
		src_size++;
	if (dest_size < size)
		rst = dest_size + src_size;
	else
		rst = size + src_size;
	i = 0;
	while (src[i] && (dest_size + i) < size - 1)
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (rst);
}
/*
int main()
{
	unsigned int s = 14;
	char *src = "world!!";
	char s2[20] = "hello ";
	printf("return = %u | s2 = %s\n", ft_strlcat(s2, src, s), s2);
	return 0;
}
*/
