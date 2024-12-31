/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancarvaj <ancarvaj@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:05:48 by ancarvaj          #+#    #+#             */
/*   Updated: 2023/09/28 16:40:41 by ancarvaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*#include <stdlib.h>
#include "libft.h"
#include <stdio.h>
int	main()
{
	
	printf("%d", ft_isdigit(3));
}*/