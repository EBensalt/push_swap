/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 18:37:13 by ebensalt          #+#    #+#             */
/*   Updated: 2022/06/25 21:56:28 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_count_nood(t_nood **a)
{
	t_nood	*ptr;
	int		i;

	ptr = *a;
	i = 0;
	while (ptr)
	{
		ptr = ptr->next;
		i++;
	}
	return (i);
}

int	push_b_0(t_nood *ptr0, t_nood	**ptr, int i, int j)
{
	while (ptr0)
	{
		i++;
		if ((*ptr)->d < ptr0->d)
		{
			*ptr = ptr0;
			j = i;
		}
		ptr0 = ptr0->next;
	}
	return (j);
}

void	push_b(t_nood **a, t_nood **b)
{
	t_nood	*ptr;
	t_nood	*ptr0;
	int		i;
	int		j;

	ptr = *b;
	i = 0;
	j = 0;
	ptr0 = ptr->next;
	j = push_b_0(ptr0, &ptr, i, j);
	while ((*b) != ptr)
	{
		if (j <= (ft_count_nood(b) / 2) + 1)
			rb(b, 0);
		else
			rrb(b, 0);
	}
	pa(a, b);
}

void	ft_algo_0(t_nood **a)
{
	if (((*a)->d < (*a)->next->d && (*a)->d < (*a)->next->next->d)
		&& (*a)->next->d > (*a)->next->next->d)
	{
		rra(a, 0);
		sa(a, 0);
	}
	if ((*a)->d > (*a)->next->d && (*a)->d < (*a)->next->next->d)
		sa(a, 0);
	if ((*a)->d < (*a)->next->d && (*a)->d > (*a)->next->next->d)
		rra(a, 0);
	if (((*a)->d > (*a)->next->d && (*a)->d > (*a)->next->next->d)
		&& (*a)->next->d < (*a)->next->next->d)
		ra(a, 0);
	if (((*a)->d > (*a)->next->d && (*a)->d > (*a)->next->next->d)
		&& (*a)->next->d > (*a)->next->next->d)
	{
		ra(a, 0);
		sa(a, 0);
	}
}

void	ft_algo(t_nood **a, t_nood **b, int ac)
{
	t_mid	m;

	m = ft_middle(a, ft_count_nood(a));
	if (ac == 3)
	{
		if ((*a)->d > (*a)->next->d)
			sa(a, 0);
	}
	else if (ac == 4)
		ft_algo_0(a);
	else if (ac > 4 && ac < 101)
	{
		if (check_sort_a(a) == 0 && !(*b))
			ft_exit(0);
		while (check_sort_a(a) != 0)
			sort_a_5(a, b);
		while ((*b))
			push_b(a, b);
	}
	else if (ac > 101 && ac < 501)
		ft_algo_1(a, b, m);
	else
		ft_algo_2(a, b);
}
