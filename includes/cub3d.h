#ifndef CUB3D_H
#define CUB3D_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "../libft/libft.h"

enum e_identifier
{
	MAP_CHAR = -2,
	ERR = -1,
	NO = 1,
	SO = 2,
	WE = 4,
	EA = 8,
	F = 16,
	C = 32
};


char	*ft_strdup_len(const char *s, unsigned int len);

#endif
