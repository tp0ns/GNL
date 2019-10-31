/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 16:49:56 by tpons             #+#    #+#             */
/*   Updated: 2019/10/31 15:56:26 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_isin(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

int		ft_strlen(const char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

void	*ft_memmove(void *dst, const void *src, unsigned int len)
{
	char	*d;
	char	*s;

	if (dst == src)
		return (dst);
	d = (char *)dst;
	s = (char *)src;
	if (s > d)
		while (len--)
			*d++ = *s++;
	else if (s < d)
		while (len--)
			*(d + len) = *(s + len);
	return (dst);
}

char	*ft_strjoin(char const *save, char const *buf)
{
	char			*str;
	unsigned int	n;

	if (!save && !buf)
		return (0);
	n = (ft_strlen(save) + ft_strlen(buf) + 1);
	if (!(str = malloc(sizeof(char) * n)))
		return (0);
	ft_memmove(str, save, ft_strlen(save));
	ft_memmove(str + ft_strlen(save), buf, ft_strlen(buf));
	str[ft_strlen(save) + ft_strlen(buf)] = '\0';
	free((void *)save);
	return (str);
}

char	*ft_setline(char *s)
{
	int		i;
	char	*str;

	i = 0;
	while (s[i] && s[i] != '\n')
		i++;
	if (!(str = malloc(sizeof(char) * (i + 1))))
		return (0);
	i = 0;
	while (s[i] && s[i] != '\n')
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
