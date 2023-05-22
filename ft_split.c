/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 11:51:38 by ilopez-r          #+#    #+#             */
/*   Updated: 2023/05/22 13:47:42 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
<<<<<<< HEAD
#include <stdlib.h>
=======
>>>>>>> cff63f428b7dca6eb316321b2470e0d1614b7390

static int	ft_counter(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			i++;
			while (*s != c && *s != '\0')
				s++;
		}
		else
			s++;
	}
	return (i);
}

<<<<<<< HEAD
static void	ft_free(char **str, int i)
=======
void	ft_free(char **str, int i)
>>>>>>> cff63f428b7dca6eb316321b2470e0d1614b7390
{
	while (i-- > 0)
		free(str[i]);
	free(str);
}

<<<<<<< HEAD
static int	ft_len(char const *s, char c, int d)
=======
int	ft_len(char const *s, char c)
>>>>>>> cff63f428b7dca6eb316321b2470e0d1614b7390
{
	int	len;

	len = 0;
<<<<<<< HEAD
	while (s[d] != '\0' && s[d] != c)
	{
		len++;
		d++;
	}
=======
	while (s[len] != '\0' && s[len] != c)
		len++;
>>>>>>> cff63f428b7dca6eb316321b2470e0d1614b7390
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		d;

	d = 0;
<<<<<<< HEAD
	i = -1;
	str = malloc((ft_counter (s, c) + 1) * sizeof(char *));
	if (!str)
		return (0);
	while (++i < ft_counter (s, c))
	{
		while (s[d] == c)
			d++;
		str[i] = ft_substr(s, d, ft_len(s, c, d));
=======
	i = 0;
	str = malloc (ft_counter(s, c) + 1);
	if (!str)
		return (0);
	while (i < ft_counter(s, c))
	{
		while (s[d] == c)
			d++;
		str[i] = ft_substr(s, d, ft_len(s, c));
>>>>>>> cff63f428b7dca6eb316321b2470e0d1614b7390
		if (!(str[i]))
		{
			ft_free(str, i);
			return (0);
		}
<<<<<<< HEAD
		d = d + ft_len(s, c, d);
=======
		d = d + ft_len(s, c);
		i++;
>>>>>>> cff63f428b7dca6eb316321b2470e0d1614b7390
	}
	str[i] = 0;
	return (str);
}
