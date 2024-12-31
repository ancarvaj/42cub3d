/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancarvaj <ancarvaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 22:39:15 by ancarvaj          #+#    #+#             */
/*   Updated: 2023/10/07 02:32:35 by ancarvaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char	ft_upper(unsigned int i, char c)
{
    (void)i;
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = ft_strdup(s);
	if (!str)
		return (0);
	else if (!f)
		return (str);
	else
	{
		while (s[i] != '\0')
		{
			str[i] = (*f)(i, s[i]);
			i++;
		}
	}
	return (str);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *s = (char *)malloc(sizeof(char) * 8);
    
    ft_strlcpy(s,"holaque", 8);   
    printf("%s", ft_strmapi(s, NULL));
}*/
