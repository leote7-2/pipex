/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriq2 <jhenriq2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:53:17 by jhenriq2          #+#    #+#             */
/*   Updated: 2024/04/25 20:41:21 by jhenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**@brief Searches for the last occurance of 'c' in "str"
 * @param *str The string were it will be search
 * @param c Character that is being search
 * @return The last occurence of 'c'
*/
char	*ft_strrchr(const char *str, int c)
{
	int		len;

	len = ft_strlen(str);
	while (len >= 0)
	{
		if (str[len] == (char)c)
			return ((char *)&str[len]);
		len--;
	}
	return (0);
}
/*
int	main()
{
	const char *str = "Hello, world!";
	int search_char = 'o';
	char *result = ft_strrchr(str, search_char);

	if (result != NULL)
	{
		printf("Última ocorrência de '%c' em '%s' encontrada em: %ld\n", 
		search_char, str, result - str);
	}
	else
	{
		printf("Caractere '%c' não encontrado em '%s'\n", search_char, str);
	}
	return (0);
}
*/