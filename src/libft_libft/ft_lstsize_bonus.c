/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancarvaj <ancarvaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:56:33 by ancarvaj          #+#    #+#             */
/*   Updated: 2023/10/17 17:00:55 by ancarvaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
/*
int	main ()
{
	t_list *a = NULL;
	t_list *b = ft_lstnew(ft_strdup("hola"));
	ft_lstadd_back(&a, b);
	printf("%d", ft_lstsize(a));
}*/
