/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancarvaj <ancarvaj@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:39:30 by ancarvaj          #+#    #+#             */
/*   Updated: 2023/09/25 19:32:06 by ancarvaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, unsigned int n)
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = (char *)s;
	if (n > 0)
	{
		while (i < n)
		{
			str[i] = 0;
			i++;
		}
	}
}
/*
#include <stdlib.h>
#include <stdio.h>
int	main()
{
	char *s = (char *)malloc(sizeof(char) * 4);
	ft_bzero(s, sizeof(char) * 4);
	printf("%s", s);
}*/