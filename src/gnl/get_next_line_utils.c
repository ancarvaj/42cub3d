/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancarvaj <ancarvaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:57:49 by ancarvaj          #+#    #+#             */
/*   Updated: 2025/01/03 12:41:13 by ancarvaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_free(char **s1)
{
	if(s1 && *s1)
	{
		free(*s1);
		*s1 = NULL;
	}
	return (NULL);
}

int	ft_strlen_gnl(char *s)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin_gnl(char *s1, char *s2)
{
	int		i;
	int		j;
	int		t;
	char	*str;

	if (!s1)
	{
		s1 = (char *)malloc(sizeof(char) * 1);
		if (!s1)
			return (NULL);
		s1[0] = '\0';
	}
	if (!s2)
		return (ft_free(&s1));
	t = ft_strlen_gnl(s1) + ft_strlen_gnl(s2);
	str = (char *)malloc(sizeof(char) * t + 1);
	if (!str)
		return (ft_free(&s1));
	i = ((j = 0), -1);
	while (s1[++i] != '\0')
		str[i] = s1[i];
	ft_free(&s1);
	while (s2[j] != '\0')
		str[i++] = s2[j++];
	return (str[i] = '\0', str);
}

int	ft_strchr_gnl(char *s, int c)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i] != '\0' && s[i] != (char)c)
		i++;
	if (s[i] != (char)c)
		return (0);
	return (1);
}
