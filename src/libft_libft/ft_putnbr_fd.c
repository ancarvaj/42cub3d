/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancarvaj <ancarvaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 10:06:46 by ancarvaj          #+#    #+#             */
/*   Updated: 2023/10/17 19:06:32 by ancarvaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

static unsigned int	ft_nbrlen(long int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (++i);
	if (n < 0)
		n = n * -1;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static unsigned int	ft_nbr_div(unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 1;
	while (i < n - 1)
	{
		j = j * 10;
		i++;
	}
	return (j);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	t;
	char			c;

	i = 0;
	j = ft_nbrlen(n);
	t = j;
	t = ft_nbr_div(t);
	if (n < 0)
	{
		n = n * -1;
		write(fd, "-", 1);
	}
	while (i < j)
	{
		c = n / t + '0';
		write(fd, &c, 1);
		n = n % t;
		i++;
		t /= 10;
	}
}
/*#include <fcntl.h>
int main()
{
   int	fd = open("hola.txt", O_WRONLY | O_RDONLY | O_APPEND);
    ft_putnbr_fd(-6784, fd);
}*/
