/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:36:47 by npremont          #+#    #+#             */
/*   Updated: 2023/10/16 09:33:32 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int	ft_display(char *file)
{
	int		fd;
	char	a;

	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (-1);
	while (read(fd, &a, 1) != 0)
	{
		write(1, &a, 1);
	}
	close(fd);
	return (0);
}

int	main(int ac, char *av[])
{
	if (ac == 1)
	{
		write(1, "File name missing.\n", 20);
		return (0);
	}
	if (ac > 2)
	{
		write(1, "Too many arguments.\n", 21);
		return (0);
	}
	if (ft_display(av[1]) == -1)
	{
		write(1, "Cannot read file.\n", 19);
		return (0);
	}
	return (0);
}
