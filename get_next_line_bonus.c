/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessaoud <aessaoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 18:19:27 by aessaoud          #+#    #+#             */
/*   Updated: 2022/12/15 12:14:59 by aessaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	check_eof(char **line, int read_size)
{
	if (!*(*line) && read_size <= 0)
	{
		free (*line);
		*line = NULL;
	}
}

char	*get_next_line(int fd)
{
	static char	rest[OPEN_MAX][BUFFER_SIZE];
	char		*line;
	int			read_size;
	char		*buffer;

	if (fd < 0 || fd > OPEN_MAX)
		return (0);
	read_size = 1;
	line = ft_calloc(1, 1);
	if (!line)
		return (0);
	if (*(rest[fd]))
		line = expand(copy_rest(rest[fd]), line);
	while (read_size > 0 && !is_nl_found(line))
	{
		buffer = (char *) ft_calloc(BUFFER_SIZE + 1, 1);
		if (!buffer)
			return (0);
		read_size = read(fd, buffer, BUFFER_SIZE);
		line = expand(line, buffer);
	}
	split_line(&line, rest[fd]);
	check_eof(&line, read_size);
	return (line);
}

// int main()
// {
// 	int fd1 = open("test1.txt", O_RDONLY);
// 	int fd2 = open("test2.txt", O_RDONLY);
// 	int fd3 = open("test3.txt", O_RDONLY);
// 	int fd4 = open("test4.txt", O_RDONLY);

// 	printf("CALL 1 from fd -> %d ->(%s)\n", fd1, get_next_line(fd1));
// 	printf("-----------\n");
// 	printf("CALL 2 from fd -> %d ->(%s)\n", fd2, get_next_line(fd2));
// 	printf("-----------\n");
// 	printf("CALL 3 from fd -> %d ->(%s)\n", fd1, get_next_line(fd1));
// 	printf("-----------\n");
// 	printf("CALL 4 from fd -> %d ->(%s)\n", fd3, get_next_line(fd3));
// 	printf("-----------\n");
// 	printf("CALL 5 from fd -> %d ->(%s)\n", fd4, get_next_line(fd4));
// 	printf("-----------\n");
// 	printf("CALL 6 from fd -> %d ->(%s)\n", fd2, get_next_line(fd2));
// 	printf("-----------\n");
// 	printf("CALL 7 from fd -> %d ->(%s)\n", fd2, get_next_line(fd2));
// 	printf("-----------\n");	
// 	return (0);
// }