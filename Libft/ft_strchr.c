/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriq2 <jhenriq2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:18:10 by jhenriq2          #+#    #+#             */
/*   Updated: 2024/04/24 17:55:56 by jhenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**@brief The function searches the first occurrence of the character in 'c'
 * @param *s The string where it will be searched
 * @param c What i'm looking for
 * @return The first occurence of c;
*/
char	*ft_strchr(const char *s, int c)
{
	char	*p;

	p = (char *)s;
	while (*p != '\0')
	{
		if (*p == (char)c)
			return (p);
		p++;
	}
	if (*p == '\0' && c == '\0')
		return (p);
	return (NULL);
}
/*
int	main()
{
	const char *d = "Hello, world!";
	int h = 'o';
	char *re = ft_strchr(d, h);
	if (re != NULL)
		printf("chara '%c' position : %d\n", h, re - d);
	else
		printf("chara '%c not found\n", h);
	return (0);
}*/
