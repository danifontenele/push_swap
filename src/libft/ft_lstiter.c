/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 21:46:44 by calvares          #+#    #+#             */
/*   Updated: 2025/11/08 15:58:31 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Iterates through the list 'lst' and applies the function 'f' to the
 * content of each node.
 * 
 * @param lst The addres of a pointer to a node.
 * @param f The address of the function to apply to each node's content.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}

/* void to_upper(void *s)
{
	char	*str;
	int		i;
	
	str = (char *)s;
	
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
}

void replace_spaces(void *s)
{
	char	*str;
	int		i;

	str = (char *)s;
	i = 0;
	while (str[i])
	{
		if (str[i] == ' ')
			str[i] = '_';
		i++;
	}
}

int main(void)
{
	t_list	*lista;
	t_list	*temp;
	
	lista = NULL;
	
	// Caso 1: Lista vazia
    printf("Caso 1: Lista vazia\n");
    ft_lstiter(lista, to_upper);  // Deve não fazer nada
    printf("	Nenhum conteúdo para modificar.\n\n");
	
    // Caso 2: Lista com um nó (teste to_upper)
    printf("Caso 2: Lista com um nó (to_upper)\n");
    lista = ft_lstnew(ft_strdup("hello"));  // Cria nó com string
    printf("	Antes: %s\n", (char *)lista->content);
    ft_lstiter(lista, to_upper);
    printf("	Depois: %s\n", (char *)lista->content);
    // Liberando a lista
    free(lista->content);
    free(lista);
    lista = NULL;
    printf("\n");

	// Caso 3: Lista com multiplos nos (teste replace_space)
	printf("Caso 3: Lista com multiplos nos (replace_spaces)\n");
	lista = ft_lstnew(ft_strdup("	watch this. "));
	lista->next = ft_lstnew(ft_strdup("You-re now in the second node ."));
	lista->next->next = 
		ft_lstnew(ft_strdup("in a third node still working    ..."));
	printf("antes:\n"); // Imprimindo antes.
	temp = lista;
	while (temp)
	{
		printf("	%s\n", (char *)temp->content);
		temp = temp->next;
	}
	ft_lstiter(lista, replace_spaces); // apliquei a funcao.
	printf("depois:\n"); // Imprimindo depois.
	temp = lista;
	while (temp)
	{
		printf("%s", (char *)temp->content);
		temp = temp->next;
	} printf ("\n\n");
	// Liberando toda a lista
	while (lista)
	{
		temp = lista;
		lista = lista->next;
		free(temp->content);
		free(temp);
	}
	
	// Caso 4: Teste com to_upper em uma lista com multiplos nos:
	printf("Caso 3: Lista com multiplos nos (to_upper)\n");
	lista = ft_lstnew(ft_strdup("	watch this. "));
	lista->next = ft_lstnew(ft_strdup("You-re now in the second node ."));
	lista->next->next = 
		ft_lstnew(ft_strdup("in a third node still working    ..."));
	printf("antes:\n"); // Imprimindo antes.
	temp = lista;
	while (temp)
	{
		printf("	%s\n", (char *)temp->content);
		temp = temp->next;
	}
	ft_lstiter(lista, to_upper); // apliquei a funcao.
	printf("depois:\n"); // Imprimindo depois.
	temp = lista;
	while (temp)
	{
		printf("%s", (char *)temp->content);
		temp = temp->next;
	} printf ("\n");
	// Liberando toda a lista
	while (lista)
	{
		temp = lista;
		lista = lista->next;
		free(temp->content);
		free(temp);
	}
	
	return (0);
} */