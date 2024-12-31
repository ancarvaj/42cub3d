/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancarvaj <ancarvaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 00:07:30 by ancarvaj          #+#    #+#             */
/*   Updated: 2023/10/17 20:34:22 by ancarvaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*s;

	i = 0;
	j = ft_strlen(s1);
	while (ft_strchr(set, s1[i]) && i < j)
		i++;
	if (i >= j)
		return (ft_strdup(s1 + j));
	while (ft_strchr(set, s1[j - 1]) && j > 0)
		j--;
	s = (char *)malloc(j - i + 1);
	if (!s)
		return (s);
	ft_strlcpy(s, s1 + i, j - i + 1);
	return (s);
}
/*
int	main()
{
	char a[] = "";
	char b[] = "";
	printf("%s", ft_strtrim(a, b));
}
*/
