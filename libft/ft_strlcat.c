/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancarvaj <ancarvaj@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 22:38:38 by ancarvaj          #+#    #+#             */
/*   Updated: 2023/10/17 20:14:21 by ancarvaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dst, const char *src, unsigned int dstsize)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = ft_strlen(dst);
	if (ft_strlen(dst) >= dstsize)
		return (ft_strlen(src) + dstsize);
	if (dstsize > 0 && src[i] != '\0')
	{
		while (src[i] && j < (dstsize - 1))
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		dst[j] = '\0';
	}
	else if (src[0] == '\0')
		return (ft_strlen(dst));
	return (j - i + ft_strlen(src));
}
/*
int	main()
{
	char *a = ft_strdup("hola");
	printf("%lu", strlcat(a, "pe", 7));
	printf("%s", a);
}*/
