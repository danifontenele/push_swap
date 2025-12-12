/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 23:16:16 by calvares          #+#    #+#             */
/*   Updated: 2025/11/08 16:21:08 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief This function iterates the list 'lst' and applies the function
 * f to each node content and creates a new list which its nodes contains 
 * the result of this function as content.
 * 
 * @param lst The address of a pointer to a node.
 * @param f The address of the function applied to each node's content.
 * @param del The address of the function used to delete a node's 
 * content if needed.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*new_list;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_node = ft_lstnew((*f)(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

/* void *to_upper(void *s)
{
	char	*str;
	char	*new_str;
	int		i;
	
	str = (char *)s;
	new_str = ft_strdup(str);
	if (!new_str)
		return (NULL);
	i = 0;
	while (new_str[i])
	{
		if (new_str[i] >= 'a' && new_str[i] <= 'z')
			new_str[i] -= 32;
		i++;
	}
	return (new_str);
}

void    del(void *content)
{
    free (content);
}

int main(void)
{
	t_list	*list1;
	t_list	*list2;

	list1 = NULL;
	list2 = NULL;
	ft_lstadd_back(&list1, ft_lstnew(ft_strdup("Hey you, ")));
	ft_lstadd_back(&list1, ft_lstnew(ft_strdup("watch this!\n")));
	list2 = ft_lstmap(list1, to_upper, del);
	printf("1) Se houver lista: \n");
	while (list2)
	{
		printf("%s", (char *)list2->content);
		list2 = list2->next;
	}
	ft_lstclear(&list1, del);
	ft_lstclear(&list2, del);
} */