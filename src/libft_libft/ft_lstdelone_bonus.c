/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancarvaj <ancarvaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:06:37 by ancarvaj          #+#    #+#             */
/*   Updated: 2023/10/17 17:10:10 by ancarvaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
/*
void	del(void *c)
{
	free(c);
}*/
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && (*del))
	{
		(*del)(lst->content);
		free(lst);
	}
}
/*
int	main()
{
	t_list *a = NULL;
	t_list *c = ft_lstnew(ft_strdup("hola"));
	a = c;
	//printf("%s", (char *)a->content);
	ft_lstdelone(a, del);
	printf("%s", (char *)a->content);
}*/
