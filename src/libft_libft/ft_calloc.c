/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancarvaj <ancarvaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 16:37:37 by ancarvaj          #+#    #+#             */
/*   Updated: 2023/10/17 20:30:28 by ancarvaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*s;

	if (count == SIZE_MAX || size == SIZE_MAX)
		return (0);
	s = malloc(count * size);
	if (!s)
		return (0);
	ft_bzero(s, size * count);
	return (s);
}
/*int	main()
{	
	char *a = ft_calloc(SIZE_MAX - 20, 4);
	char *b = calloc(SIZE_MAX - 20, 4);
	for (int i = 0; a && i < 200; i++)
	{
		a[i] = 'a';
		b[i] = 'a';
	}
	printf("%s", a);
	printf("%s", b);
}*/
