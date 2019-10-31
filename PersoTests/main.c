/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 15:54:23 by tpons             #+#    #+#             */
/*   Updated: 2019/10/31 16:26:10 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

// int main()
// {
// 	char *line;
// 	int res;
// 	while ((res = get_next_line(0, &line)))
// 	{
// 		printf("%d\t|%s|\n", res, line);
// 		free(line);
// 	}
// 	printf("%d\t%s\n", res, line);
// 	free(line);
// 	getchar();
// 	return 0;
// }

int			main()
{
	int     fd;
	char	*line;
	int		rtn;

	// line = malloc(sizeof(char *) * 2);
	// if (!line)
	//  	return (0);
	write(1,"test1\n", 6);
	rtn = 1;
	fd = open("./test.txt",O_RDONLY, 1);
	if (fd)
	{
		printf("Lecture du fichier (text) : \n");
		while (rtn == 1)
		{
			rtn = get_next_line(fd, &line);
			printf("rtn is %d output : |%s|\n", rtn, line);
			free(line);
		}
	}
	else
		printf("No FD.\n");
	close(fd);
	while(1) {}
	return (0);
}
// 	while(1) {}
// 	write(1,"test2\n", 6);
// 	rtn = 1;
// 	fd = open("tests/eight.txt",O_RDONLY, 1);
// 	if (fd)
// 	{
// 		printf("Lecture du fichier (eight): \n");
// 		while (rtn == 1)
// 		{
// 			rtn = get_next_line(fd, line);
// 			printf("|%s|\n", *line);
// 		}
// 	}
// 	else
// 		printf("No FD.\n");
// 	close(fd);
// 	write(1,"test3\n", 6);
// 	rtn = 1;
// 	fd = open("tests/empty.txt",O_RDONLY, 1);
// 	if (fd)
// 	{
// 		printf("Lecture du fichier (empty): \n");
// 		while (rtn == 1)
// 		{
// 			rtn = get_next_line(fd, line);
// 			printf("|%s|\n", *line);
// 		}
// 	}
// 	else
// 		printf("No FD.\n");
// 	close(fd);
// 	rtn = 1;
// 	fd = open("tests/file001.txt",O_RDONLY, 1);
// 	if (fd)
// 	{
// 		printf("Lecture du fichier (file001): \n");
// 		while (rtn == 1)
// 		{
// 			rtn = get_next_line(fd, line);
// 			printf("|%s|\n", *line);
// 		}
// 	}
// 	else
// 		printf("No FD.\n");
// 	close(fd);
// 	rtn = 1;
// 	fd = open("tests/file002.txt",O_RDONLY, 1);
// 	if (fd)
// 	{
// 		printf("Lecture du fichier (file002): \n");
// 		while (rtn == 1)
// 		{
// 			rtn = get_next_line(fd, line);
// 			printf("|%s|\n", *line);
// 		}
// 	}
// 	else
// 		printf("No FD.\n");
// 	close(fd);
// 	rtn = 1;
// 	fd = open("tests/file003.txt",O_RDONLY, 1);
// 	if (fd)
// 	{
// 		printf("Lecture du fichier (file003): \n");
// 		while (rtn == 1)
// 		{
// 			rtn = get_next_line(fd, line);
// 			printf("|%s|\n", *line);
// 		}
// 	}
// 	else
// 		printf("No FD.\n");
// 	close(fd);
// 	rtn = 1;
// 	fd = open("tests/many_big_lines.txt",O_RDONLY, 1);
// 	if (fd)
// 	{
// 		printf("Lecture du fichier (many_big_lines): \n");
// 		while (rtn == 1)
// 		{
// 			rtn = get_next_line(fd, line);
// 			printf("|%s|\n", *line);
// 		}
// 	}
// 	else
// 		printf("No FD.\n");
// 	close(fd);
// 	rtn = 1;
// 	fd = open("tests/many_nl.txt",O_RDONLY, 1);
// 	if (fd)
// 	{
// 		printf("Lecture du fichier (many_nl): \n");
// 		while (rtn == 1)
// 		{
// 			rtn = get_next_line(fd, line);
// 			printf("|%s|\n", *line);
// 		}
// 	}
// 	else
// 		printf("No FD.\n");
// 	close(fd);
// 	rtn = 1;
// 	fd = open("tests/no_nl.txt",O_RDONLY, 1);
// 	if (fd)
// 	{
// 		printf("Lecture du fichier (no_nl): \n");
// 		while (rtn == 1)
// 		{
// 			rtn = get_next_line(fd, line);
// 			printf("|%s|\n", *line);
// 		}
// 	}
// 	else
// 		printf("No FD.\n");
// 	close(fd);
// 	rtn = 1;
// 	fd = open("tests/one_char.txt",O_RDONLY, 1);
// 	if (fd)
// 	{
// 		printf("Lecture du fichier (one_char): \n");
// 		while (rtn == 1)
// 		{
// 			rtn = get_next_line(fd, line);
// 			printf("|%s|\n", *line);
// 		}
// 	}
// 	else
// 		printf("No FD.\n");
// 	close(fd);
// 	rtn = 1;
// 	fd = open("tests/only_nl.txt",O_RDONLY, 1);
// 	if (fd)
// 	{
// 		printf("Lecture du fichier (only_nl): \n");
// 		while (rtn == 1)
// 		{
// 			rtn = get_next_line(fd, line);
// 			printf("|%s|\n", *line);
// 		}
// 	}
// 	else
// 		printf("No FD.\n");
// 			close(fd);
// 	rtn = 1;
// 	fd = open("tests/two_big_lines.txt",O_RDONLY, 1);
// 	if (fd)
// 	{
// 		printf("Lecture du fichier (two_big_lines): \n");
// 		while (rtn == 1)
// 		{
// 			rtn = get_next_line(fd, line);
// 			printf("|%s|\n", *line);
// 		}
// 	}
// 	else
// 		printf("No FD.\n");
// 	return (0);
// }*/