/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsacikar <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 20:18:29 by hsacikar          #+#    #+#             */
/*   Updated: 2022/01/08 20:18:30 by hsacikar         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	ch;

	ch = (unsigned char)c;
	len = ft_strlen((char *)s);
	if (ch == '\0')
		return ((char *)(&s[len]));
	while (--len >= 0)
	{
		if (s[len] == ch)
		{
			return ((char *)(&s[len]));
		}
	}
	return (0);
}
// int main()
// {
//     char deneme[155] = "Deneme Yazısı Hello World!";
//    printf("d nin bulunduğu yer  =  %s \n", ft_strrchr(deneme, 87));
// }
