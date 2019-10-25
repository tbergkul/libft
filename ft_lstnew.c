/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbergkul <tbergkul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 19:20:03 by tbergkul          #+#    #+#             */
/*   Updated: 2019/10/24 15:47:17 by tbergkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (new)
	{
		if (content == 0)
		{
			new->content = NULL;
			new->content_size = 0;
		}
		else
		{
			new->content = (void *)content;
			new->content_size = content_size;
		}
		new->next = NULL;
	}
	return (new);
}
