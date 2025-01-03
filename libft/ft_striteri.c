/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancarvaj <ancarvaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 00:18:53 by ancarvaj          #+#    #+#             */
/*   Updated: 2023/10/17 20:44:32 by ancarvaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	f(unsigned int c, char *a)
{
	a[c] = 'a';
}*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0' && (*f))
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
int	main()
{
	char *a = ft_strdup("hola");
	ft_striteri(a, f);
	printf("%s", a);
}*/
