/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriq2 <jhenriq2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:50:10 by jhenriq2          #+#    #+#             */
/*   Updated: 2024/04/24 16:37:56 by jhenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**@brief Variable is ascii
 * @param i Ascii representation
 * @return 1 if is ascii or 0 if not
*/
int	ft_isascii(int i)
{
	if (i >= 0 && i <= 127)
		return (1);
	return (0);
}
/*#include <stdio.h>
int	main()
{
	char i = '1';
	printf("%d\n", ft_isascii(i));
	return(0);
}*/