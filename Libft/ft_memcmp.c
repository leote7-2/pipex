/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriq2 <jhenriq2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:56:11 by jhenriq2          #+#    #+#             */
/*   Updated: 2024/04/24 17:38:46 by jhenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**@brief Comparing blocks of memory unitl the byte n
 * @param *str1 Pointer to the first region being compared
 * @param *str2 Pointer to the second region being compared
 * @param n Number of bytes being compared
 * @return A pointer to the 
*/
int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t					a;
	const unsigned char		*s1;
	const unsigned char		*s2;

	s1 = (const unsigned char *)str1;
	s2 = (const unsigned char *)str2;
	a = 0;
	while (a < n)
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
		a++;
	}
	return (0);
}
/*#include <stdio.h>
int	main()
{
	printf("%d\n", ft_memcmp("hEllo", "hello", 2));
	return(0);
}*/
