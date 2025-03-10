/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriq2 <jhenriq2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:56:49 by jhenriq2          #+#    #+#             */
/*   Updated: 2024/04/24 18:21:42 by jhenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**@brief Character has to be lowercase
 * @param content If character is uppercase, puts it in lowercase
 * @return The character in lowercase
*/
int	ft_tolower(int i)
{
	if (i >= 'A' && i <= 'Z')
		i += 32;
	return (i);
}
/*
int	main()
{
	char i = 'A';
	printf("%c\n", ft_tolower(i));
	return(0);
}*/