/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriq2 <jhenriq2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:35:05 by jhenriq2          #+#    #+#             */
/*   Updated: 2024/04/25 15:57:42 by jhenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**@brief Creats a new node of a link list
 * @param Content content to include in the node
 * @return The node created
*/
t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = (t_list *)malloc(sizeof(t_list));
	if (!head)
		return (NULL);
	head->content = content;
	head->next = NULL;
	return (head);
}
/*
int	main()
{
	t_list	*node;
	int num;

	num = 20;
	node = ft_lstnew(&num);
	printf("%i\n", *((int *)node->content));
	free (node);
}
*/