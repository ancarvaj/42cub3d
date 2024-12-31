/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancarvaj <ancarvaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:26:46 by ancarvaj          #+#    #+#             */
/*   Updated: 2023/10/17 17:19:36 by ancarvaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new)
	{
		new->next = *lst;
		*lst = new;
	}
}
/*
int	main()
{
	t_list *s = NULL;
	t_list *a = ft_lstnew(ft_strdup("hola"));
	//printf("%s", (char *)s->content);
	ft_lstadd_front(&s, a);
	printf("%s", (char *)s->content);
}*/
