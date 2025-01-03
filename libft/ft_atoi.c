/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancarvaj <ancarvaj@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:46:43 by ancarvaj          #+#    #+#             */
/*   Updated: 2023/09/25 18:40:45 by ancarvaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	t;

	i = 0;
	sign = 1;
	t = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		if (str[i + 1] == '+' || str[i + 1] == '-')
			return (0);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		t = (t * 10) + (str[i] - '0');
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (t * sign);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main()
{
	char const *s = (char *)malloc(sizeof(char) * 4);
	printf("%d", ft_atoi("1234"));
}*/