/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriq2 <jhenriq2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:58:40 by jhenriq2          #+#    #+#             */
/*   Updated: 2024/05/08 15:35:56 by jhenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**@brief Compares the two strings
 * @param *s1 Pointer to the first string that will be compared
 * @param *s2 Pointer to the second string that will be compared
 * @param n Size of bytes that will be compared
 * @return The ascii diference of both strings
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
/*#include <stdio.h>
int	main()
{
	printf("%d\n", ft_strncmp("OLA amigos", "OLA Amigos", 5));
}*/
