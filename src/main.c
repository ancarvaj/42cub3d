#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "libft/libft.h"
#include "gnl/get_next_line.h"

const enum e_identifier
{
	NO = 1,
	SO = 2,
	WE = 4,
	EA = 8,
	F = 16,
	C = 32
};

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

enum e_identifier	ft_get_identifier(const char *line)
{
	int	i;

	if (!line || !line[0] || line[0] == '\n')
		return (0);
	i = 0;
	while (line[i] == ' ')
		i++;
	
}
/*
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
	return (-1);
*/


int	ft_map_error_checker(int fd)
{
	const unsigned char	bin = NO | SO | WE | EA | F | C;
	unsigned char	map_bin = 0;
	char			*s;

	while ((s = get_next_line(fd)))
	{
		map_bin |= ft_get_identidier(s);
		free(s);
	}
	//while gnl if NO/SO/WE/EA/F/C map_bin |= NO/SO/WE/EA/F/C
	//if bin != map_bin return error
	//check if 0,255 color
	//check if path texture is correct
	//parse map 1/0/N,S,E,W
	//check if surronded by 1 and so
	//start map
	return (0);
}

//MAKEFILE
//.H
//ERROR HANDLE

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
		close(fd);
		return (1);
	}
	//if (ft_start_game())
		//return (1)
	close(fd);
	return (0);
}
