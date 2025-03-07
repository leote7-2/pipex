/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriq2 <jhenriq2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:02:26 by jhenriq2          #+#    #+#             */
/*   Updated: 2024/04/24 15:58:14 by jhenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**@brief Character has to be lowercase
 * @param c Character given
 * @param fd File descriptor
 * @return Nothing
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*int	main()
{
	ft_putchar_fd('a', 1);
}*/