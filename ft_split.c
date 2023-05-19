/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 11:51:38 by ilopez-r          #+#    #+#             */
/*   Updated: 2023/05/17 12:48:31 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_counter(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s != '\0')
	{
		while (*s == c && *s != '\0')
		{
			s++;
			if (*s != '\0')
				i++;
		}
		while (*s != c && *s != '\0')
			s++;
	}
	return (i);
}

void	ft_free(char **str, int i)
{
	while (i-- > 0)
		free(str[i]);
	free(str);
}

int	ft_len(char const *s, char c)
{
	int	len;

	len = 0;
	while (s[len] != '\0' && s[len] != c)
		len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		d;

	d = 0;
	i = 0;
	str = malloc (ft_counter(s, c) + 1);
	if (!str)
		return (0);
	while (i < ft_counter(s, c))
	{
		while (s[d] == c)
			d++;
		str[i] = ft_substr(s, d, ft_len(s, c));
		if (!(str[i]))
		{
			ft_free(str, i);
			return (0);
		}
		d = d + ft_len(s, c);
		i++;
	}
	str[i] = 0;
	return (str);
}
