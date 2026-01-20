#include "../../push_swap.h"

static void	free_arguments(char **av)
{
	int	i;

	if (av)
	{
		i = 0;
		while (av[i])
			free(av[i++]);
	}
	free(av);
}

static void	free_stacks(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*next;

	while (*a)
	{
		next = (*a)->next;
		free(*a);
		(*a) = next;
	}
	while (*b)
	{
		next = (*b)->next;
		free(*b);
		(*b) = next;
	}
}

void	leaks_killer(t_stack_node *a, t_stack_node *b, char **av, int ac)
{
	if (ac == 2)
		free_arguments(av);
	free_stacks(&a, &b);
}
