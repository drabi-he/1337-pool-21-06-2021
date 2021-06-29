/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdrabi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 10:49:36 by hdrabi            #+#    #+#             */
/*   Updated: 2021/06/29 10:52:14 by hdrabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_to_lower_case(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 'a' - 'A';
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_to_lower_case(str);
	if (str[0] != '\0' && str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] + 'A' - 'a';
	i = 1;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			if (!((str[i - 1] >= 'a' && str[i - 1] <= 'z')
					|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
					|| (str[i - 1] >= '0' && str[i - 1] <= '9')))
				str[i] = str[i] + 'A' - 'a';
		i++;
	}
	return (str);
}
