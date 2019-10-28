/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 11:32:20 by tpons             #+#    #+#             */
/*   Updated: 2019/10/28 15:19:32 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

unsigned int	ft_strlen_isin(const char *s, int mod)
{
	unsigned int i;

	i = 0;
	if (!s)
		return (0);
	if (!mod)
	{
		while (s[i])  //PEUT ETRE ERREUR (PAS DE SECU SUR S NULL)(ANCIEN FT_IS_IN)
		{
			if (s[i] == '\n')
				return (1);
			i++;
		}
		return (0);
	}
	while (s[i])
		i++;
	return (i);
}

void			*ft_memmove(void *dst, const void *src, unsigned int len)
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

char			*ft_strjoin(char const *save, char const *buf)
{
	char			*str;
	unsigned int	n;

	if (!save && !buf)
		return (0);
	if (!save)
		return (ft_subcstr(buf));
	n = (ft_strlen_isin(save, 1) + ft_strlen_isin(buf, 1) + 1); //COUCOU
	if (!(str = malloc(sizeof(char) * n)))
		return (0);
	ft_memmove(str, save, ft_strlen_isin(save, 1));
	ft_memmove(str + ft_strlen_isin(save, 1), buf, ft_strlen_isin(buf, 1));
	str[ft_strlen_isin(save, 1) + ft_strlen_isin(buf, 1)] = '\0';
	//free((void *)save);
	return (str);
}

char			*ft_subcstr(char const *s)
{
	char			*str;
	int				i;
	int				j;

	i = 0;
	j = 0;
	while (s[i])
		i++;
	if (!(str = malloc(sizeof(char) * (i + 1))))
		return (0);
	while (s[j])
	{
		str[j] = s[j];
		j++;
	}
	str[j] = '\0';
	return (str);
}

char			*ft_setline(char *s)
{
	int		i;
	char	*str;

	i = 0;
	while (s[i] && s[i] != '\n')
		i++;
	if(!(str = malloc(sizeof(char) * (i + 1))))
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
