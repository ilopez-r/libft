/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 12:34:15 by ilopez-r          #+#    #+#             */
/*   Updated: 2023/04/27 17:00:46 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	size_t	len;

	i = 0;
	len = ft_strlen(s1);
	if (s1 == 0 || set == 0)
		return (0);
	while (s1[i] != 0 && ft_strchr(set, s1[i]))
		i++;
	while (len != 0 && ft_strrchr(set, s1[len]))
	{
		len--;
	}
	return (ft_substr(s1, i, (len + 1) - i));
}
