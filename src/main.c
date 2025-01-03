#include "cub3d.h"


int	ft_map_ext_check(const char *name)
{
	size_t	len;

	if (!name)
		return (1);
	len = ft_strlen(name);
	if (name[--len] != 'b')
		return (1);
	if (name[--len] != 'u')
		return (1);
	if (name[--len] != 'c')
		return (1);
	if (name[--len] != '.')
		return (1);
	return (0);
}

int	ft_is_map_char(char c)
{
	int	i;
	const char map_char[8] = "01NSEW \n";

	i = 0;
	while (map_char[i])
	{
		if (map_char[i] == c)
			return (0);
		i++;
	}
	return (1);
}

enum e_identifier	ft_identifier(const char *line)
{
	if (!ft_strncmp("NO", line, ft_strlen(line)))
		return (NO);
	if (!ft_strncmp("SO", line, ft_strlen(line)))
		return (SO);
	if (!ft_strncmp("WE", line, ft_strlen(line)))
		return (WE);
	if (!ft_strncmp("EA", line, ft_strlen(line)))
		return (EA);
	if (!ft_strncmp("F", line, ft_strlen(line)))
		return (F);
	if (!ft_strncmp("C", line, ft_strlen(line)))
		return (C);
	if (!ft_is_map_char(line[0]))
		return (-2);
	return (-1);
}

enum e_identifier	ft_get_identifier(const char *line)
{
	int					i;
	int					j;
	char				*str;
	enum e_identifier	ident;

	if (!line || !line[0] || line[0] == '\n')
		return (0);
	i = 0;
	while (line[i] == ' ' || line[i] == '\t')
		i++;
	j = 0;
	while (line[i + j] && line[i + j] != ' ' && line[i + j] != '\n')
		j++;
	str = ft_strdup_len(line + i, j);
	ident = ft_identifier(str);
	free(str);
	return (ident);
}

int	ft_is_map(const char *s)
{
	int	i;

	if (!s || !s[0])
		return (1);
	i = 0;
	while (s[i])
	{
		if (ft_is_map_char(s[i]))
			return (1);
		i++;
	}
	return (0);
}

int	ft_is_valid_map(int fd)
{
	int		i;
	char	*s;

	i = 0;
	while ((s = get_next_line(fd)))
	{
		if (s[0] == '\n')
		{
			free(s);
			return (1);
		}
		if (ft_is_map(s))
		{
			free(s);
			return (1);
		}
		free(s);
	}
	return (0);
}

int	ft_map_error_checker(int fd)
{
	const unsigned char	bin = NO | SO | WE | EA | F | C;
	unsigned char		map_bin = 0;
	char				*s;
	enum e_identifier	ident;

	while ((s = get_next_line(fd)))
	{
		ident = ft_get_identifier(s);
		if (ident == (enum e_identifier)-2)
		{
			if (ft_is_map(s))
			{
				free(s);
				return (1);
			}
			free(s);
			if (!ft_is_valid_map(fd) && map_bin == bin)
				return (0);
			return (1);
		}
		free(s);
		if (ident == (enum e_identifier)-1)
			return (1);
		map_bin |=  ident;
	}
	//check if 0,255 color
	//check if path texture is correct
	//parse map 1/0/N,S,E,W
	//check if surronded by 1 and so
	//start map
	return (1);
}

int main(int ac, char *av[])
{
	int	fd;

	if (ac != 2)
	{
		write(2, "Error\nNot valid number of arg\n", 30);
		return (1);
	}
	if (ft_map_ext_check(av[1]))
	{
		write(2, "Error\nNot a valid map extension\n", 32);
		return (1);
	}
	fd = open(av[1], O_RDONLY);
	if (ft_map_error_checker(fd))
	{

		write(2, "Error\nNot a valid map file\n", 28);
		close(fd);
		return (1);
	}
	//if (ft_start_game())
		//return (1)
	close(fd);
	return (0);
}
