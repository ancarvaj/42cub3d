/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancarvaj <ancarvaj@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:20:22 by ancarvaj          #+#    #+#             */
/*   Updated: 2023/09/20 20:22:13 by ancarvaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*#include <stdlib.h>
#include "libft.h"
#include <stdio.h>
int	main()
{
	
	printf("%d", ft_isprint(33));
}*/