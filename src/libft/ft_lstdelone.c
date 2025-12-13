/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 20:01:31 by calvares          #+#    #+#             */
/*   Updated: 2025/11/05 01:20:57 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Removes one element from the list.
 * Removes the node passed as a parameter.
 * Free the node itself, but does not free the next node.
 * 
 * @param lst The node to free.
 * @param del The address of the function used to delete
 * the content.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	if (lst)
	{
		(*del)(lst->content);
		free (lst);
	}
}

/* void    del(void *content)
{
    free (content);
}

int  main(void)
{
    t_list  *A;

    A = ft_lstnew(ft_strdup("Node to delete"));
	// Antes de deletar o no A
	printf("address = %p, content = %s\n", A, (char *)A->content);
	
	// Aplicando a funcao
	ft_lstdelone(A, del);
	
	//Depois de deletar o no A
	printf("address = %p, content = %s", A, (char *)A->content); // Da segfault
	
	//Imprimindo o mesmo endereco
	A = NULL;
	printf("address = %p", A);
} */