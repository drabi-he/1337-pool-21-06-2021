/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdrabi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 17:02:26 by hdrabi            #+#    #+#             */
/*   Updated: 2021/06/30 13:20:40 by hdrabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	k;
	int	pos;

	i = 0;
	while (str[i])
	{
		k = 0;
		j = i;
		pos = j;
		while (to_find[k])
		{
			if (str[j] != to_find[k])
				pos = -1;
			k++;
			j++;
		}
		if (pos != -1 )
			return (str + pos);
		i++;
	}
	return (NULL);
}
