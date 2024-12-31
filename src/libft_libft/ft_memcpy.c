/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancarvaj <ancarvaj@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:50:38 by ancarvaj          #+#    #+#             */
/*   Updated: 2023/10/17 17:57:55 by ancarvaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, unsigned int n)
{
	unsigned int	i;
	char			*dt;
	const char		*sc;

	dt = (char *)dst;
	sc = (char *)src;
	if (dt == 0 && sc == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		dt[i] = sc[i];
		i++;
	}
	return (dst);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main()
{
	//void *dst = (void *)malloc(sizeof(void) *4);
	void *ds = ft_strdup("hol");
	printf("%s", (char *)ft_memcpy(ds, "adios", 346));
}*/
