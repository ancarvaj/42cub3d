/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancarvaj <ancarvaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:09:21 by ancarvaj          #+#    #+#             */
/*   Updated: 2023/10/17 17:16:04 by ancarvaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
/*
int	main()
{
	t_list *a = NULL;
	a = ft_lstnew(ft_strdup("hola"));
	ft_lstadd_back(&a, ft_lstnew(ft_strdup("adios")));
	printf("%s", (char *)ft_lstlast(a)->content);
}*/
