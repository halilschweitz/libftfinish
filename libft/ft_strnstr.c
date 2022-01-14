/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsacikar <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 19:52:45 by hsacikar          #+#    #+#             */
/*   Updated: 2022/01/08 19:52:49 by hsacikar         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	c;
	char	*haystr;

	haystr = (char *)haystack;
	if (needle[0] == '\0')
		return (haystr);
	i = 0;
	while (haystr[i] != '\0' && i < len)
	{
		c = 0;
		while ((haystr[i + c] == needle[c]) && (i + c) < len)
		{
			if (needle[c + 1] == '\0')
				return (&haystr[i]);
			c++;
		}
		i++;
	}
	return (0);
}
// int main()
// {
//     char str[] = "halilsd";
//     char str2[] = "lil";
//     printf("%s", ft_strnstr(str,str2,3));
// }
