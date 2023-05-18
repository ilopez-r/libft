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

#include <libft.h>

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

char	**ft_split(char const *s, char c)