/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancarvaj <ancarvaj@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:30:42 by ancarvaj          #+#    #+#             */
/*   Updated: 2023/10/17 22:46:28 by ancarvaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, unsigned int len)
{
	char			*str;
	unsigned int	i;

	str = (char *)b;
	i = 0;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (b);
}
/*
#include <stdio.h>
#include "libft.h"

int main()
{
	printf("%s", (char *)ft_memset(ft_strdup("hola"), 'c', 4));
}*/
