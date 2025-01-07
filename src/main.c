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
	int			i;
	const char	map_char[7] = " 01NSEW";

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
	if (!ft_strncmp("NO", line, ft_strlen(line) + 1))
		return (NO);
	if (!ft_strncmp("SO", line, ft_strlen(line) + 1))
		return (SO);
	if (!ft_strncmp("WE", line, ft_strlen(line) + 1))
		return (WE);
	if (!ft_strncmp("EA", line, ft_strlen(line) + 1))
		return (EA);
	if (!ft_strncmp("F", line, ft_strlen(line) + 1))
		return (F);
	if (!ft_strncmp("C", line, ft_strlen(line) + 1))
		return (C);
	if (!ft_is_map_char(line[0]))
		return (MAP_CHAR);
	return (ERR);
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
	//free(str)
	//str = ft_strdup(line + i + j);
	//if (ft_check_path(str))
	//retunr (1)
	free(str);
	return (ident);
}

int	ft_is_valid_map(const char *content)
{
	int		i;
	int		j;
	int		t;
	char	*line;

	i = 0;
	j = 0;
	while (content[i])
	{
		if (content[i] == '\n')
		{
			line = ft_strdup_len(content + j, i - j);
			if (!line[0])
			{
				free(line);
				return (1);
			}
			printf("line->%s\n", line);
			t = 0;
			while (line[t])
			{
				if (ft_is_map_char(line[t]))
					return (1);
				t++;
			}
			free(line);
			j = i + 1;
		}
		i++;
	}
	return (0);
}

int	ft_map_error_checker(const char *content)
{
	const unsigned char	bin = NO | SO | WE | EA | F | C;
	unsigned char		map_bin = 0;
	enum e_identifier	ident;
	int					i;
	int					j;

	i = 0;
	j = 0;
	while (content[i])
	{
		if (content[i] == '\n')
		{
			ident = ft_get_identifier(content + j);
			if (ident == MAP_CHAR && map_bin == bin)
			{
				if (!ft_is_valid_map(content + j))
					return (0);
				return (1);
			}
			if (ident == ERR)
				return(1);
			map_bin |= ident;
			j = i + 1;
		}
		i++;
	}
	//check if 0,255 color
	//check if path texture is correct
	//parse map 1/0/N,S,E,W
	//check if surronded by 1 and so
	//start map
	return (1);
}

char	*ft_get_file_content(int fd)
{
	char	*file_content;
	char	*s;

	s = NULL;
	file_content = NULL;
	while ((s = get_next_line(fd)))
	{
		file_content = ft_strjoin_gnl(file_content, s);
		free(s);
	}
	return (file_content);
}

int main(int ac, char *av[])
{
	int		fd;
	char	*file_content;

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
	file_content = ft_get_file_content(fd);
	if (ft_map_error_checker(file_content))
	{
		write(2, "Error\nNot a valid map file\n", 28);
		close(fd);
		return (1);
	}
	free(file_content);
	//if (ft_start_game())
		//return (1)
	close(fd);
	return (0);
}
