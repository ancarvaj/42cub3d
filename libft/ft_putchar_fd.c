/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancarvaj <ancarvaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 01:53:51 by ancarvaj          #+#    #+#             */
/*   Updated: 2023/10/17 18:17:59 by ancarvaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
  #include <fcntl.h>
int	main()
{
	int fd = open("hola.txt", O_WRONLY | O_RDONLY | O_APPEND);
	ft_putchar_fd('c', fd);
}*/
