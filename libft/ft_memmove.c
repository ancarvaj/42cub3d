/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancarvaj <ancarvaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:11:08 by ancarvaj          #+#    #+#             */
/*   Updated: 2023/10/17 17:56:28 by ancarvaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, unsigned int len)
{
	unsigned int	i;
	char			*dt;
	char			*sc;

	dt = (char *)dst;
	sc = (char *)src;
	if (sc == 0 && dt == 0)
		return (0);
	i = 0;
	if (dst > src)
	{
		while (len-- > 0)
			dt[len] = sc[len];
	}
	else
	{
		while (i++ < len)
			dt[i - 1] = sc[i - 1];
	}
	return (dst);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	main()
{
	//void *s = (void *)malloc(sizeof(void) * 7);
	void *a = ft_strdup("adios");
	printf("%s", (char *)ft_memmove(a, "hola", 545));
}*/
