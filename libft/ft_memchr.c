/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancarvaj <ancarvaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:14:51 by ancarvaj          #+#    #+#             */
/*   Updated: 2023/10/17 22:46:44 by ancarvaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	char			c2;
	unsigned int	i;
	char			*str;

	c2 = (char) c;
	i = 0;
	str = (char *)s;
	if (n > 0)
	{
		while (i <= (n - 1))
		{
			if (str[i] == c2)
				return ((void *)&str[i]);
			i++;
		}
	}
	return (0);
}
/*
int main()
{
	printf("%s", (char *)ft_memchr("hola", 'a', 3));
}*/
