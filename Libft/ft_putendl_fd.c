/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriq2 <jhenriq2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:05:59 by jhenriq2          #+#    #+#             */
/*   Updated: 2024/04/24 15:54:35 by jhenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**@brief Write a string followed by a new line
 * @param *s A pointer to a string
 * @param fd File descriptor
 * @return Nothing
*/
void	ft_putendl_fd(char const *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	write (fd, "\n", 1);
}
/*
int	main()
{
	ft_putendl_fd("ola", 1);
}*/