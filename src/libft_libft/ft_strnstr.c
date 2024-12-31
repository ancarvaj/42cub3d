/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancarvaj <ancarvaj@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 11:00:40 by ancarvaj          #+#    #+#             */
/*   Updated: 2024/12/31 15:31:17 by ancarvaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, unsigned int len)
{
	unsigned int	i;
	unsigned int	j;
	char			*h;
	char			*n;

	i = 0;
	h = (char *)haystack;
	n = (char *)needle;
	if (n[0] == '\0')
		return (h);
	while (h[i] != '\0' && i < len)
	{
		j = 0;
		while (h[i + j] == n[j] && i + j < len)
		{
			if (n[j + 1] == '\0')
				return (&h[i]);
			j++;
		}
		i++;
	}
	return (0);
}
