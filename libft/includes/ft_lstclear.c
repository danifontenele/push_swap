/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 20:14:03 by calvares          #+#    #+#             */
/*   Updated: 2025/11/05 00:44:50 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Delete and frees the given node and all its successors, using
 * the function 'del' and free(3). Finally set the pointer to the list to
 * NULL.
 * 
 * @param lst The address of a pointer to a node.
 * @param del The address of the function used to delete the content
 * of the node.
 */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !*lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		(*del)((*lst)->content);
		free (*lst);
		*lst = tmp;
	}
	*lst = NULL;
}

/* void    del(void *content)
{
    free (content);
}

int main() 
{
    t_list *lst = NULL;  // Ponteiro para a cabeça da lista
	
    // Caso 1: Lista vazia
    printf("Caso 1: Lista vazia\n");
    printf("Antes: lst = %p\n", (void *)lst);
    ft_lstclear(&lst, del);
    printf("Depois: lst = %p\n", (void *)lst);  // Deve ser NULL
    printf("\n");
	
    // Caso 2: Lista com um nó
    printf("Caso 2: Lista com um nó\n");
    lst = ft_lstnew(ft_strdup("Hi, I'm the node 1 text.")); 
    printf("Antes: lst = %p, content = %s\n", (void *)lst, (char *)lst->content);
    ft_lstclear(&lst, del);
    printf("Depois: lst = %p\n", (void *)lst);  // Deve ser NULL
    printf("\n");
   
	// Caso 3: Lista com múltiplos nós
    printf("Caso 3: Lista com múltiplos nós\n");
    lst = ft_lstnew(ft_strdup("Node 1"));
    lst->next = ft_lstnew(ft_strdup("Node 2"));
    lst->next->next = ft_lstnew(ft_strdup("Node 3"));
    printf("Antes: lst = %p\n", (void *)lst);
   
	// Percorre e imprime para verificar (opcional)
    t_list *temp = lst;
    while (temp) 
	{
        printf("  Node: %s\n", (char *)temp->content);
        temp = temp->next;
    }
    ft_lstclear(&lst, del);
    printf("Depois: lst = %p\n", (void *)lst);  // Deve ser NULL
    printf("\n");
   
	// Caso 4: Teste com conteúdo NULL
    printf("Caso 4: Nó com content NULL\n");
    lst = ft_lstnew(NULL);
    printf("Antes: lst = %p, content = %p\n", (void *)lst, lst->content);
    ft_lstclear(&lst, del);
    printf("Depois: lst = %p\n", (void *)lst);  // Deve ser NULL
	
	return (0);
} */