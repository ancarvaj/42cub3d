#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

size_t	ft_strlen(const char *s)
{
	size_t	len;

	if (!s)
		return (0);
	len = 0;
	while (s[len])
		len++;
	return (len);
}

enum e_identifier
{
	NO = 0,
	SO = 1,
	WE = 2,
	EA = 3,
	F = 4,
	C = 5 
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

int	ft_map_error_checker(int fd)
{
	enum		e_identifier;
	const unsigned char	bin = NO | SO | WE | EA | F | C;
	unsigned char	map_bin = 0;

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
