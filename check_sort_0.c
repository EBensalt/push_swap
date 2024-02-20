/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort_0.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 13:40:30 by ebensalt          #+#    #+#             */
/*   Updated: 2022/06/24 15:54:51 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	prb(t_nood **a, t_nood	**b)
{
	pb(a, b);
	rb(b, 0);
}

void	sort_a_0(t_nood **a, t_nood **b, int i, t_mid m)
{
	t_nood	*ptr;

	ptr = *a;
	while (i == 2)
	{
		ptr = *a;
		while (ptr)
		{
			i = 3;
			if (ptr->d >= m.a && ptr->d <= m.f)
			{
				i = 2;
				break ;
			}
			ptr = ptr->next;
		}
		if ((*a)->d < m.a || (*a)->d > m.f)
			ra(a, 0);
		if ((*a)->d >= m.a && (*a)->d <= m.b)
			prb(a, b);
		if ((*a)->d <= m.f && (*a)->d >= m.e)
			pb(a, b);
	}
}

int	sort_a_1(t_nood **a, t_nood **b, int i, t_mid m)
{
	t_nood	*ptr;

	ptr = *a;
	while (i == 1)
	{
		ptr = *a;
		while (ptr)
		{
			i = 2;
			if (ptr->d >= m.b && ptr->d <= m.e)
			{
				i = 1;
				break ;
			}
			ptr = ptr->next;
		}
		if ((*a)->d < m.b || (*a)->d > m.e)
			ra(a, 0);
		if ((*a)->d >= m.b && (*a)->d <= m.c)
			prb(a, b);
		if ((*a)->d <= m.e && (*a)->d >= m.d)
			pb(a, b);
	}
	return (i);
}

int	sort_a_2(t_nood **a, t_nood **b, int i, t_mid m)
{
	t_nood	*ptr;

	ptr = *a;
	while (i == 0)
	{
		ptr = *a;
		while (ptr)
		{
			i = 1;
			if (ptr->d >= m.c && ptr->d <= m.d)
			{
				i = 0;
				break ;
			}
			ptr = ptr->next;
		}
		if ((*a)->d < m.c || (*a)->d > m.d)
			ra(a, 0);
		if ((*a)->d >= m.c && (*a)->d <= m.d)
			pb(a, b);
	}
	return (i);
}

void	sort_a(t_nood **a, t_nood **b, t_mid m)
{
	int		i;

	i = 0;
	while (*a)
	{
		i = sort_a_2(a, b, i, m);
		i = sort_a_1(a, b, i, m);
		sort_a_0(a, b, i, m);
		if ((*a)->d <= m.a)
			prb(a, b);
		else
			pb(a, b);
	}
}
