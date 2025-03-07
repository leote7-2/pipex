/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriq2 <jhenriq2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:04:19 by jhenriq2          #+#    #+#             */
/*   Updated: 2024/04/25 15:33:05 by jhenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**@brief Find and return the last node of the list
 * @param *lst Pointer to the first element of the list
 * @return The last node of the list
*/
t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (!lst->next)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

/*int	main()
{
	t_list	*node1;
	t_list	*node2;
	
	node1 = ft_lstnew((void *)10);
	node2 = ft_lstnew((void *)15);
	free(node1);
	free(node2);
}*/