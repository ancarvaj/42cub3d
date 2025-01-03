/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancarvaj <ancarvaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 11:32:55 by ancarvaj          #+#    #+#             */
/*   Updated: 2025/01/03 13:18:39 by ancarvaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	ft_nb(char *s)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i] != '\0' && s[i] != '\n')
		i++;
	if (s[i] == '\n')
		i++;
	return (i);
}

static char	*ft_get_buf(char *s, int fd)
{
	char	*buf;
	int		t;

	buf = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buf)
		return (ft_free(&s));
	t = 42;
	buf[0] = '\0';
	while (t > 0 && !ft_strchr_gnl(buf, '\n'))
	{
		t = read(fd, buf, BUFFER_SIZE);
		if (t < 0)
			return (ft_free(&buf), ft_free(&s));
		if (t > 0)
		{
			buf[t] = '\0';
			s = ft_strjoin_gnl(s, buf);
			if (!s)
				return (ft_free(&s), ft_free(&buf));
		}
	}
	free(buf);
	return (s);
}

static char	*ft_get_line(char *s, int len)
{
	char	*str;
	int		i;

	if (s[0] == '\0')
		return (NULL);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static char	*ft_get_res(char *s, int start)
{
	char	*str;
	int		i;


	if (s[start] == '\0')
		return (ft_free(&s));
	str = (char *)malloc(sizeof(char) * (ft_strlen_gnl(s) - start + 1));
	if (!str)
		return (ft_free(&s));
	i = 0;
	while (s[start] != '\0')
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	ft_free(&s);
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*s;
	char		*line;
	int			i;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!ft_strchr_gnl(s, '\n'))
	{
		s = ft_get_buf(s, fd);
		if (!s)
			return (NULL);
	}
	i = ft_nb(s);
	line = ft_get_line(s, i);
	if (!line)
		return (ft_free(&s));
	s = ft_get_res(s, i);
	return (line);
}
