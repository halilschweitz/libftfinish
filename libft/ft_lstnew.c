/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsacikar <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 18:09:35 by hsacikar          #+#    #+#             */
/*   Updated: 2022/01/14 18:09:35 by hsacikar         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*oldu;

	oldu = malloc(sizeof(t_list));
	if (!oldu)
		return (NULL);
	oldu->content = content;
	oldu->next = NULL;
	return (oldu);
}
