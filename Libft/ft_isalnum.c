/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriq2 <jhenriq2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:35:45 by jhenriq2          #+#    #+#             */
/*   Updated: 2024/04/24 16:37:25 by jhenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**@brief Variable is alpha or numeric
 * @param i Ascii representation
 * @return 1 if is alphanumeric or 0 if not
*/
int	ft_isalnum(int i)
{
	if (((i >= 'A' && i <= 'Z') || (i >= 'a' && i <= 'z'))
		|| (i >= '0' && i <= '9'))
		return (1);
	return (0);
}
/*int	main()
{
	char i = '1';
	printf("%d\n", ft_isalnum(i));
	return(0);
}*/