/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 20:18:58 by calvares          #+#    #+#             */
/*   Updated: 2025/11/04 21:27:01 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst == NULL)
		*lst = new;
	else
		ft_lstlast(*lst)->next = new;
}

/* int	main(void)
{
	// Testando node vazio como argumento:
	t_list	*lista1;
	
	lista1 = NULL;
	ft_lstadd_back(&lista1, ft_lstnew(NULL));
	printf("Teste1: Se node == NULL:\n");
	printf("%s\n", (char *)lista1->content);
	
	// Criando uma lista valida:
	t_list	*lista2;

	lista2 = NULL;
	ft_lstadd_back(&lista2, ft_lstnew("first node, "));
	ft_lstadd_back(&lista2, ft_lstnew("second node."));

	printf("Teste 3: Se tudo estiver nos conformes:\n");
	while (lista2)
	{
		printf("%s", (char *)lista2->content);
		lista2 = lista2->next;
	}
	printf("\n");
} */