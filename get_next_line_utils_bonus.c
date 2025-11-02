/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-asla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 13:45:10 by mel-asla          #+#    #+#             */
/*   Updated: 2025/10/28 14:14:59 by mel-asla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	if (!s)
		return (0);
	len = 0;
	while (s[len])
		len++;
	return (len);
}

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*d;

	if (!s)
		return (NULL);
	i = 0;
	d = malloc(ft_strlen(s) + 1);
	if (!d)
		return (NULL);
	while (s[i])
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (unsigned char)c)
		return ((char *)&s[i]);
	return (NULL);
}

static char	*ft_copy(char *d, const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		d[i] = s[i];
		i++;
	}
	return (d + i);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*d;
	char	*p;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1);
	len += ft_strlen(s2);
	d = malloc(len + 1);
	if (!d)
		return (NULL);
	p = d;
	p = ft_copy(p, s1);
	p = ft_copy(p, s2);
	*p = '\0';
	return (d);
}
