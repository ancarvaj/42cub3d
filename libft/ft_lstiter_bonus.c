/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancarvaj <ancarvaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 22:35:13 by ancarvaj          #+#    #+#             */
/*   Updated: 2023/10/17 16:55:45 by ancarvaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	f(void *c)
{
	printf("%s", (char *)c);
}
*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL && (*f))
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
/*
int	main()
{
	t_list *a = NULL;
	t_list *c = ft_lstnew(ft_strdup("hola"));
	t_list *v = ft_lstnew(ft_strdup("adios"));
	ft_lstadd_back(&a, c);
	ft_lstadd_back(&a, v);
	//printf("%s", (char *)a->content);
	ft_lstiter(a,f);
	//printf("%s", (char *)a->content);
}*/
