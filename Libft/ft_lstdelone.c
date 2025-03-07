/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriq2 <jhenriq2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:06:10 by jhenriq2          #+#    #+#             */
/*   Updated: 2024/05/01 15:10:58 by jhenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**@brief Deletes one node
 * @param *lst Pointer to the first element of the list
 * @param *del Pointer of the function to delete
 * @return Nothing
*/
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!del || !lst)
		return ;
	del(lst->content);
	free(lst);
}

/*void	dele(void *data)
{
	free(data);
}
int main()
{
	int	*data = malloc(sizeof(int));
	*data = 42;

	t_list *node = malloc(sizeof(t_list));
	node->content = data;
	node->next = NULL;

	ft_lstdelone(node, dele);

	if (node == NULL)
		printf("Node deletado com sucesso!\n");
	else
		printf("Falha ao deletar o node.\n");
	return (0);
}*/