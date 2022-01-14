/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsacikar <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 18:40:53 by hsacikar          #+#    #+#             */
/*   Updated: 2022/01/14 18:40:55 by hsacikar         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*aktar;

	if (lst == NULL)
		return (NULL);
	aktar = lst;
	while (aktar->next != NULL)
		aktar = aktar->next;
	return (aktar);
}
