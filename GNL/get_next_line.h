/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 11:32:45 by tpons             #+#    #+#             */
/*   Updated: 2019/10/28 15:19:34 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>

int					get_next_line(int fd, char **line);

unsigned int		ft_strlen_isin(const char *s, int mod);
void				*ft_memmove(void *dst, const void *src, unsigned int len);
char				*ft_strjoin(char const *save, char const *buf);
char				*ft_subcstr(char const *s);
char				*ft_setline(char *s);

#endif
