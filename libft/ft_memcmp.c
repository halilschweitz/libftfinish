/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsacikar <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 19:18:27 by hsacikar          #+#    #+#             */
/*   Updated: 2022/01/08 19:18:28 by hsacikar         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

// int main ()
// {
//     int ret = 0;
//     int ret2 = 0;
//     int arr1[] = {1,2,3,4};
//     int arr2[] = {5,4,3,4};
//     ret = ft_memcmp(arr1, arr2, 2);
//     ret2 = memcmp(arr1, arr2, 6);
//     printf("sonuç : %d", ret);
//     printf("sonuç2 : %d", ret2);
// }
