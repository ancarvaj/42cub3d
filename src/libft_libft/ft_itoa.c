/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancarvaj <ancarvaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:42:25 by ancarvaj          #+#    #+#             */
/*   Updated: 2023/10/10 00:37:28 by ancarvaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static unsigned int	ft_nbrlen(long int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (++i);
	if (n < 0)
		n = n * -1;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static unsigned int	ft_nbr_div(unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 1;
	while (i < n - 1)
	{
		j = j * 10;
		i++;
	}
	return (j);
}

static void	ft_nbrstr_cpy(char *s, int len, long int n)
{
	int	i;
	int	t;

	i = 0;
	t = ft_nbr_div(len);
	if (n < 0)
	{
		s[i] = '-';
		n = n * -1;
		i++;
		len++;
	}
	while (i < len)
	{
		s[i] = n / t + '0';
		n = n % t;
		t = t / 10;
		i++;
	}
	s[i] = '\0';
}

char	*ft_itoa(int n)
{
	int			j;
	int			a;
	char		*s;
	long int	t;

	t = n;
	a = 1;
	j = ft_nbrlen(n);
	if (n < 0)
		a = a + 1;
	s = (char *)malloc(sizeof(char) * (j + a));
	if (!s)
		return (0);
	ft_nbrstr_cpy(s, j, t);
	return (s);
}
/*
int	main()
{
	long int	i = 0;
	printf("%s",ft_itoa(0));	
}*/
