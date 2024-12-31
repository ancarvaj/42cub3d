/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancarvaj <ancarvaj@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:14:19 by ancarvaj          #+#    #+#             */
/*   Updated: 2023/09/20 20:16:20 by ancarvaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*#include <stdlib.h>
#include "libft.h"
#include <stdio.h>
int	main()
{
	
	printf("%d", ft_isascii(32));
}*/