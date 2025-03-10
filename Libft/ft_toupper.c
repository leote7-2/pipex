/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriq2 <jhenriq2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:55:53 by jhenriq2          #+#    #+#             */
/*   Updated: 2024/04/24 18:21:47 by jhenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**@brief Character has to be uppercase
 * @param content If character is lowercase, puts it in uppercase
 * @return The character in Uppercase
*/
int	ft_toupper(int i)
{
	if (i >= 'a' && i <= 'z')
		i -= 32;
	return (i);
}
/*
int	main()
{
	char i = 'a';
	printf("%c\n", ft_toupper(i));
	return(0);
}*/