/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancarvaj <ancarvaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 22:40:24 by ancarvaj          #+#    #+#             */
/*   Updated: 2023/10/17 16:57:45 by ancarvaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
/*
void	*o(void *s)
{
	if (s == "hola")
		s = "pepe";
	return (s);
}

void	del(void *a)
{
	free(a);
}*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*l;
	t_list	*t;
	void	*a;

	l = 0;
	while (lst != NULL && (*f) && (*del))
	{
		a = (*f)(lst->content);
		t = ft_lstnew(a);
		if (!t || !a)
		{
			del(a);
			ft_lstclear(&l, (*del));
			free(t);
			return (0);
		}
		ft_lstadd_back(&l, t);
		lst = lst->next;
	}
	return (l);
}
/*
int	main()
{
	void	*a = "hola";
	void	*b = "paco";
	t_list *l = NULL;
	ft_lstadd_back(&l, ft_lstnew(b));
	//printf("%s\n", (char *)l->content);
	//l = l->next;
	ft_lstadd_back(&l, ft_lstnew(a));
	//printf("%s", (char *)l->content);
	ft_lstmap(l, (o), (del));
}*/
