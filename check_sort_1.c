/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 16:02:11 by ebensalt          #+#    #+#             */
/*   Updated: 2022/06/24 16:23:03 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_a_7(t_nood **a, t_nood **b, int i, t_mid m)
{
	t_nood	*ptr;

	ptr = *a;
	while (i == 3)
	{
		ptr = *a;
		while (ptr)
		{
			i = 4;
			if (ptr->d >= m.a && ptr->d <= m.h)
			{
				i = 3;
				break ;
			}
			ptr = ptr->next;
		}
		if ((*a)->d < m.a || (*a)->d > m.h)
			ra(a, 0);
		if ((*a)->d >= m.a && (*a)->d <= m.b)
			prb(a, b);
		if ((*a)->d <= m.h && (*a)->d >= m.g)
			pb(a, b);
	}
}

int	sort_a_4(t_nood **a, t_nood **b, int i, t_mid m)
{
	t_nood	*ptr;

	ptr = *a;
	while (i == 2)
	{
		ptr = *a;
		while (ptr)
		{
			i = 3;
			if (ptr->d >= m.b && ptr->d <= m.g)
			{
				i = 2;
				break ;
			}
			ptr = ptr->next;
		}
		if ((*a)->d < m.b || (*a)->d > m.g)
			ra(a, 0);
		if ((*a)->d >= m.b && (*a)->d <= m.c)
			prb(a, b);
		if ((*a)->d <= m.g && (*a)->d >= m.f)
			pb(a, b);
	}
	return (i);
}

int	sort_a_8(t_nood **a, t_nood **b, int i, t_mid m)
{
	t_nood	*ptr;

	ptr = *a;
	while (i == 1)
	{
		ptr = *a;
		while (ptr)
		{
			i = 2;
			if (ptr->d >= m.c && ptr->d <= m.f)
			{
				i = 1;
				break ;
			}
			ptr = ptr->next;
		}
		if ((*a)->d < m.c || (*a)->d > m.f)
			ra(a, 0);
		if ((*a)->d >= m.c && (*a)->d <= m.d)
			prb(a, b);
		if ((*a)->d <= m.f && (*a)->d >= m.e)
			pb(a, b);
	}
	return (i);
}

int	sort_a_6(t_nood **a, t_nood **b, int i, t_mid m)
{
	t_nood	*ptr;

	ptr = *a;
	while (i == 0)
	{
		ptr = *a;
		while (ptr)
		{
			i = 1;
			if (ptr->d >= m.d && ptr->d <= m.e)
			{
				i = 0;
				break ;
			}
			ptr = ptr->next;
		}
		if ((*a)->d < m.d || (*a)->d > m.e)
			ra(a, 0);
		if ((*a)->d >= m.d && (*a)->d <= m.e)
			pb(a, b);
	}
	return (i);
}

void	sort_a_3(t_nood **a, t_nood **b, t_mid m)
{
	int		i;

	i = 0;
	while (*a)
	{
		i = sort_a_6(a, b, i, m);
		i = sort_a_8(a, b, i, m);
		i = sort_a_4(a, b, i, m);
		sort_a_7(a, b, i, m);
		if ((*a)->d <= m.a)
			prb(a, b);
		else
			pb(a, b);
	}
}
