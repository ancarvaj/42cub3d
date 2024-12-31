/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancarvaj <ancarvaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 02:51:26 by ancarvaj          #+#    #+#             */
/*   Updated: 2023/10/14 19:15:14 by ancarvaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static unsigned int	ft_substr_nbr(char const *s, char c)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0' && s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			j++;
			if (s[i + 1] == c)
				j--;
		}
		i++;
	}
	if (i > 0 && s[i - 1] && s[i - 1] != c)
		j++;
	return (j);
}

static unsigned int	ft_substr_len(char const *s, char c)
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (i);
		}
		i++;
	}
	return (i);
}

static unsigned int	ft_substr_dup_len(char const *s, char c)
{
	unsigned int	i;

	i = 0;
	while (s[i] && s[i] == c)
	{
		i++;
	}
	return (i);
}

static void	ft_free_substr(char **s, unsigned int len)
{
	while (len > 0 && s[--len])
		free(s[len]);
	free(s);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	t;
	char			**str;

	i = 0;
	t = 0;
	str = (char **)malloc(((ft_substr_nbr(s, c) + 1) * sizeof(char *)));
	if (!str)
		return (0);
	while (i < ft_substr_nbr(s, c))
	{
		t = t + ft_substr_dup_len(s + t, c);
		j = ft_substr_len(s + t, c);
		str[i] = ft_substr(s, t, j);
		if (!str[i])
		{
			ft_free_substr(str, i);
			return (NULL);
		}
		i++;
		t = t + j + 1;
	}
	str[i] = NULL;
	return (str);
}
// int main()
// {
// 	char *s = "";
// 	char **result = ft_split(s, '\65');
// 	printf("%s\n", result[0]);
// }

// int	main()
// {
// 	char s[] = "";
// 	//char s[] = "   lorem ipsum dolor sit amet,
// consectetur adipiscing elit. Sed non risus.     Suspendisse     ";
// 	char c = 'a';
// 	char **a = ft_split(s, c);
// 	while (*a)
// 	{
// 		printf("%s\n", *a);
// 		a++;
// 	}
// }