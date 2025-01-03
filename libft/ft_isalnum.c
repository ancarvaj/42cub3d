/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancarvaj <ancarvaj@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:09:30 by ancarvaj          #+#    #+#             */
/*   Updated: 2023/09/20 20:19:38 by ancarvaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (2);
	else if (c >= 'A' && c <= 'Z')
		return (3);
	else
		return (0);
}
/*#include <stdlib.h>
#include "libft.h"
#include <stdio.h>
int	main()
{
	
	printf("%d", ft_isalnum('A'));
}*/
