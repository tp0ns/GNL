/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 12:01:21 by tpons             #+#    #+#             */
/*   Updated: 2019/10/24 10:25:42 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

// static char *test(char *str)
// {
// 	static char *test;
// 	int i = 0;

// 	while (str[i])
// 	{
// 		test[i] = str[i];
// 		i++;
// 	}
// 	test[i] = 'f';
// 	test[i + 1] = '\0';
// 	return (test);
// }

int 	main()
{
	char buf[16];
	int last;
	int i = 0;
	
	int fd = open("text.txt", O_RDONLY);
	last = read (fd, buf, 15);
	while (buf[i])
	{
		write (1, &buf[i++], 1);
	}
	write (1, "\n", 1);
	write (1, &buf[last - 1], 1);
	return (0);
}