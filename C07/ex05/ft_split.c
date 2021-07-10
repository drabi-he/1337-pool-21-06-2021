/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdrabi <hdrabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 16:40:03 by hdrabi            #+#    #+#             */
/*   Updated: 2021/07/10 13:00:52 by hdrabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src, int s, int e)
{
	int	i;

	i = 0;
	while (s < e)
	{
		dest[i] = src[s];
		s++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_count_char(char *str, char *charset, int *i, int *s)
{
	int	j;
	int	char_cp;

	*s = *i;
	char_cp = 0;
	while (str[*i] != '\0')
	{
		j = 0;
		while (charset[j])
		{
			if (str[*i] == charset[j])
				break ;
			else
				j++;
		}
		if (!charset[j])
			char_cp++;
		else
			break ;
		++*i;
	}
	return (char_cp);
}

int	ft_count_words(char *str, char *charset)
{
	int	i;
	int	j;
	int	word_cp;
	int	k;

	i = -1;
	k = 0;
	word_cp = 0;
	while (str[++i])
	{
		j = -1;
		while (charset[++j])
			if (str[i] == charset[j])
				break ;
		if (!charset[j])
			k++;
		if ((charset[j] && k != 0) || (str[i + 1] == '\0' && k != 0))
		{
			word_cp++;
			k = 0;
		}
	}
	return (word_cp);
}

char	**ft_split(char *str, char *charset)
{
	char	**rst;
	int		i;
	int		k;
	int		size;
	int		start;

	i = 0;
	k = 0;
	rst = malloc(sizeof(char *) * (ft_count_words(str, charset) + 1));
	while (k < ft_count_words(str, charset))
	{
		size = ft_count_char(str, charset, &i, &start);
		if (!size)
			i++;
		if (size)
		{
			rst[k] = malloc(sizeof(char) * (size + 1));
			rst[k] = ft_strcpy(rst[k], str, start, i);
		}
		if (size != 0)
			k++;
	}
	rst[k] = 0;
	return (rst);
}
/*
int main()
{
	char *str = "Di DewhwrXMwTnA5jDFI82HpRY1I9lyWDQm1Ly3w";
	char *charset = "";
	char **rst = ft_split(str, charset);
	int k = 0;

	while (rst[k])
	{
		printf("rst[%d] = %s\n", k + 1, rst[k]);
		k++;
	}
}
*/
