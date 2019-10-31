/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 16:50:50 by tpons             #+#    #+#             */
/*   Updated: 2019/10/31 15:56:27 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>

int		get_next_line(int fd, char **line);

int		ft_isin(char *str);
char	*ft_strjoin(char const *save, char const *buf);
int		ft_strlen(const char *str);
void	*ft_memmove(void *dst, const void *src, unsigned int len);
char	*ft_setline(char *s);
char	*cut_nxtline(char *s);

#endif
