/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancarvaj <ancarvaj@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:24:13 by ancarvaj          #+#    #+#             */
/*   Updated: 2024/12/31 16:10:31 by ancarvaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlen(const char	*s)
{
	size_t	i;

	if (!s || !s[0])
		return (0);
	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/*int	main()
{
	printf("%d", ft_strlen("hola"));
}*/