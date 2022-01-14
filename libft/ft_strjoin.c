/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsacikar <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:38:17 by hsacikar          #+#    #+#             */
/*   Updated: 2022/01/10 16:38:18 by hsacikar         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*ccat;
	int		s1len;
	int		s2len;

	if (!s1 || !s2)
		return (NULL);
	s1len = ft_strlen((char *)s1);
	s2len = ft_strlen((char *)s2);
	ccat = (char *)malloc((s1len + s2len + 1) * sizeof(char));
	if (ccat == NULL)
		return (NULL);
	ft_strlcpy(&ccat[0], s1, s1len + 1);
	ft_strlcpy(&ccat[s1len], s2, s2len + 1);
	return (ccat);
}

// int main()
// {
//     char s1[] = "halil ";
//     char s2[] = "deneme s2 dizesi";
//     printf("%s ", ft_strjoin(s1, s2));
// }
