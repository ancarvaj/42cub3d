/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancarvaj <ancarvaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:18:02 by ancarvaj          #+#    #+#             */
/*   Updated: 2023/10/17 16:19:50 by ancarvaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst && new)
		ft_lstlast(*lst)->next = new;
	else if (new)
		*lst = new;
}
/*
int	main()
{
	t_list *a;
	void *c = "hola";
	t_list *b = NULL;
	a = ft_lstnew(c);
	ft_lstadd_back(&b, a);
	printf("%s", (char *)b->content);	
}*/
