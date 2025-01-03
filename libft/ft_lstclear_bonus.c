/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancarvaj <ancarvaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:54:31 by ancarvaj          #+#    #+#             */
/*   Updated: 2023/10/17 16:45:23 by ancarvaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
/*void	del(void	*a)
{
	free(a);
}
*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	while (*lst != NULL && (*del))
	{
		(*del)((*lst)->content);
		tmp = (*lst)->next;
		free(*lst);
		*lst = tmp;
	}
}
/*
int	main()
{
	t_list *lst = NULL;
	t_list *d = ft_lstnew(ft_strdup("hola"));
	t_list *p = ft_lstnew(ft_strdup("adios"));
	ft_lstadd_back(&lst, d);
	ft_lstadd_back(&lst, p);
	printf("%s", (char *)lst->content);
	//lst = lst->next;
	//printf("%s\n", (char *)lst->content);
	ft_lstclear(&lst, del);
	//printf("%s", (char*)lst->content);	
}*/
