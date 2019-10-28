/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 11:31:33 by tpons             #+#    #+#             */
/*   Updated: 2019/10/28 15:19:33 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	get_next_line(int fd, char **line)
{
	char		*buf;
	static char	*save;
	int			rtn;

	rtn = 1;
	if (!line)
		return (-1);
	if (!(buf = malloc(sizeof(char) * (BUFFER_SIZE + 1))))
		return (-1);
	while (!ft_strlen_isin(save, 0) && rtn != 0)
	{
		if ((rtn = read(fd, buf, BUFFER_SIZE)) == -1)
			return (-1);
		buf[rtn] = '\0';
		save = ft_strjoin(save, buf);   //QUE SE PASSE-T'IL SI SAVE ET BUFF = 0
	}
	free(buf);
	*line = ft_setline(save);
	while (*save != '\n' && *save)
		save++;
	save++;
	if (rtn == 0)
		return (0);
	return (1);
}

#include <stdio.h>
#include <fcntl.h>

int main()
{
	int     fd;
	char	**line;
	int		rtn;

	line = malloc(sizeof(char *) * 2);
	if (!line)
		return (0);
	write(1,"test1\n", 6);
	rtn = 1;
	fd = open("./text.txt",O_RDONLY, 1);
	if (fd)
	{
		printf("Lecture du fichier (text) : \n");
		while (rtn == 1)
		{
			rtn = get_next_line(fd, line);
			printf("res is %d output : |%s|\n", rtn, *line);
		}
	}
	else
		printf("No FD.\n");
	close(fd);
	while(1) {}
	return (0);
	//while(1) {}
	/*write(1,"test2\n", 6);
	rtn = 1;
	fd = open("tests/eight.txt",O_RDONLY, 1);
	if (fd)
	{
		printf("Lecture du fichier (eight): \n");
		while (rtn == 1)
		{
			rtn = get_next_line(fd, line);
			printf("|%s|\n", *line);
		}
	}
	else
		printf("No FD.\n");
	close(fd);
	write(1,"test3\n", 6);
	rtn = 1;
	fd = open("tests/empty.txt",O_RDONLY, 1);
	if (fd)
	{
		printf("Lecture du fichier (empty): \n");
		while (rtn == 1)
		{
			rtn = get_next_line(fd, line);
			printf("|%s|\n", *line);
		}
	}
	else
		printf("No FD.\n");
	close(fd);
	rtn = 1;
	fd = open("tests/file001.txt",O_RDONLY, 1);
	if (fd)
	{
		printf("Lecture du fichier (file001): \n");
		while (rtn == 1)
		{
			rtn = get_next_line(fd, line);
			printf("|%s|\n", *line);
		}
	}
	else
		printf("No FD.\n");
	close(fd);
	rtn = 1;
	fd = open("tests/file002.txt",O_RDONLY, 1);
	if (fd)
	{
		printf("Lecture du fichier (file002): \n");
		while (rtn == 1)
		{
			rtn = get_next_line(fd, line);
			printf("|%s|\n", *line);
		}
	}
	else
		printf("No FD.\n");
	close(fd);
	rtn = 1;
	fd = open("tests/file003.txt",O_RDONLY, 1);
	if (fd)
	{
		printf("Lecture du fichier (file003): \n");
		while (rtn == 1)
		{
			rtn = get_next_line(fd, line);
			printf("|%s|\n", *line);
		}
	}
	else
		printf("No FD.\n");
	close(fd);
	rtn = 1;
	fd = open("tests/many_big_lines.txt",O_RDONLY, 1);
	if (fd)
	{
		printf("Lecture du fichier (many_big_lines): \n");
		while (rtn == 1)
		{
			rtn = get_next_line(fd, line);
			printf("|%s|\n", *line);
		}
	}
	else
		printf("No FD.\n");
	close(fd);
	rtn = 1;
	fd = open("tests/many_nl.txt",O_RDONLY, 1);
	if (fd)
	{
		printf("Lecture du fichier (many_nl): \n");
		while (rtn == 1)
		{
			rtn = get_next_line(fd, line);
			printf("|%s|\n", *line);
		}
	}
	else
		printf("No FD.\n");
	close(fd);
	rtn = 1;
	fd = open("tests/no_nl.txt",O_RDONLY, 1);
	if (fd)
	{
		printf("Lecture du fichier (no_nl): \n");
		while (rtn == 1)
		{
			rtn = get_next_line(fd, line);
			printf("|%s|\n", *line);
		}
	}
	else
		printf("No FD.\n");
	close(fd);
	rtn = 1;
	fd = open("tests/one_char.txt",O_RDONLY, 1);
	if (fd)
	{
		printf("Lecture du fichier (one_char): \n");
		while (rtn == 1)
		{
			rtn = get_next_line(fd, line);
			printf("|%s|\n", *line);
		}
	}
	else
		printf("No FD.\n");
	close(fd);
	rtn = 1;
	fd = open("tests/only_nl.txt",O_RDONLY, 1);
	if (fd)
	{
		printf("Lecture du fichier (only_nl): \n");
		while (rtn == 1)
		{
			rtn = get_next_line(fd, line);
			printf("|%s|\n", *line);
		}
	}
	else
		printf("No FD.\n");
			close(fd);
	rtn = 1;
	fd = open("tests/two_big_lines.txt",O_RDONLY, 1);
	if (fd)
	{
		printf("Lecture du fichier (two_big_lines): \n");
		while (rtn == 1)
		{
			rtn = get_next_line(fd, line);
			printf("|%s|\n", *line);
		}
	}
	else
		printf("No FD.\n");
	return (0);*/
}
