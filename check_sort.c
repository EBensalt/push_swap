/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 21:32:27 by ebensalt          #+#    #+#             */
/*   Updated: 2022/06/24 14:17:03 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sort_a(t_nood **a)
{
	t_nood	*ptr;

	if (!(*a))
		return (1);
	ptr = *a;
	while (ptr->next)
	{
		if (ptr->d > ptr->next->d)
			return (1);
		ptr = ptr->next;
	}
	return (0);
}

void	sort_a_5_0(t_nood **a, t_nood *ptr)
{
	if ((*a)->d > ptr->d && (*a)->next->d < ptr->d)
	{
		sa(a, 0);
		rra(a, 0);
		sa(a, 0);
	}
	if ((*a)->d > (*a)->next->d && (*a)->next->d > ptr->d)
	{
		sa(a, 0);
		rra(a, 0);
	}
}

void	sort_a_5(t_nood **a, t_nood **b)
{
	t_nood	*ptr;

	ptr = *a;
	while (ptr->next)
		ptr = ptr->next;
	if ((*a)->d < (*a)->next->d && (*a)->next->d < ptr->d)
		pb(a, b);
	if ((*a)->d > (*a)->next->d && (*a)->d < ptr->d)
	{
		sa(a, 0);
		pb(a, b);
	}
	if ((*a)->d < ptr->d && (*a)->next->d > ptr->d)
	{
		rra(a, 0);
		sa(a, 0);
	}
	if ((*a)->d < (*a)->next->d && (*a)->d > ptr->d)
		rra(a, 0);
	sort_a_5_0(a, ptr);
}
