/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedantas <dedantas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 19:10:12 by dedantas          #+#    #+#             */
/*   Updated: 2025/04/06 19:43:52 by dedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#define BUF_SIZE 1000

void	ft_putstr(char *str, int fd)
{
	while (*str)
		write(fd, str++, 1);
}

int	main(int ac, char **av)
{
	int		fd;
	int		bytes;
	char	buf[BUF_SIZE];

	if (ac < 2)
		return (ft_putstr("File name missing.\n", 2), 1);
	if (ac > 2)
		return (ft_putstr("Too many arguments.\n", 2), 1);
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Cannot read file.\n", 2);
		return (1);
	}
	bytes = read(fd, buf, BUF_SIZE);
	while (bytes > 0)
	{
		write(1, buf, bytes);
		bytes = read(fd, buf, BUF_SIZE);
	}
	close(fd);
	return (0);
}
