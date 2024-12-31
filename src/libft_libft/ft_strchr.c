/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancarvaj <ancarvaj@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:19:02 by ancarvaj          #+#    #+#             */
/*   Updated: 2023/10/17 19:10:46 by ancarvaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (str[i] != '\0')
	{
		if ((char)c == str[i])
			return (&str[i]);
		i++;
	}
	if ((char)c == '\0')
		return (&str[i]);
	return (NULL);
}
/*
int	main()
{
	printf("%s", ft_strchr("hola", 'a'));
}*/
