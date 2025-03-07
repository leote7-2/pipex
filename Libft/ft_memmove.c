/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriq2 <jhenriq2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:54:44 by jhenriq2          #+#    #+#             */
/*   Updated: 2024/05/01 15:18:08 by jhenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**@brief Copies the lenght of bytes of str1 to str2
 * @param *str1 String where it will be copied the lenght
 * @param *str2 String where it will be copied to
 * @param n Number of bytes copied
 * @return A pointer to str1
*/
void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	int	i;

	if (str1 > str2)
	{
		i = (int)n - 1;
		while (i >= 0)
		{
			((char *)str1)[i] = ((char *)str2)[i];
			i--;
		}
	}
	else
	{
		ft_memcpy(str1, str2, n);
	}
	return (str1);
}
