/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriq2 <jhenriq2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:37:07 by jhenriq2          #+#    #+#             */
/*   Updated: 2024/04/24 16:37:22 by jhenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**@brief Variable is alpha
 * @param i Ascii representation
 * @return 1 if is alpha or 0 if not
*/
int	ft_isalpha(int i)
{
	if ((i >= 'A' && i <= 'Z') || (i >= 'a' && i <= 'z'))
		return (1);
	return (0);
}
/*int	main()
{
	char i = '1';
	printf("%d\n", ft_isalpha(i));
	return(0);
}*/