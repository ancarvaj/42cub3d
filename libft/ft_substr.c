/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancarvaj <ancarvaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 19:38:34 by ancarvaj          #+#    #+#             */
/*   Updated: 2023/10/17 20:43:12 by ancarvaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, unsigned int len)
{
	char			*str;

	if (!s)
		return (0);
	if (len >= ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	if (len == 0 || start >= ft_strlen(s))
		return (ft_strdup(""));
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}
/*int	main()
{
	char *s = ft_strdup("hola");
	printf("%s", ft_substr(s, 2, 4));
}*/
