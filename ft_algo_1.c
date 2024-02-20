/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 14:32:22 by ebensalt          #+#    #+#             */
/*   Updated: 2022/06/24 19:11:24 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_mid	ft_middle_2(int i, int n, int j, int *s)
{
	t_mid	m;

	while (++i < n)
	{
		j = i;
		while (++j < n)
		{
			if (s[i] > s[j])
				ft_my_swap(&s[i], &s[j]);
		}
	}
	m.a = s[n / 9];
	m.b = s[(n / 9) * 2];
	m.c = s[(n / 9) * 3];
	m.d = s[(n / 9) * 4];
	m.e = s[(n / 9) * 5];
	m.f = s[(n / 9) * 6];
	m.g = s[(n / 9) * 7];
	m.h = s[(n / 9) * 8];
	free(s);
	return (m);
}

t_mid	ft_middle_1(t_nood **a, int n)
{
	int		*s;
	t_nood	*ptr;
	int		i;
	int		j;
	t_mid	m;

	j = 0;
	s = malloc(n * sizeof(int));
	ptr = *a;
	i = -1;
	while (++i < n)
	{
		s[i] = ptr->d;
		ptr = ptr->next;
	}
	i = -1;
	m = ft_middle_2(i, n, j, s);
	return (m);
}

void	ft_algo_1(t_nood **a, t_nood **b, t_mid m)
{
	if (check_sort_a(a) == 0 && !(*b))
		ft_exit(0);
	else
	{
		sort_a(a, b, m);
		while ((*b))
			push_b(a, b);
	}
}

void	ft_algo_2(t_nood **a, t_nood **b)
{
	t_mid	m;

	m = ft_middle_1(a, ft_count_nood(a));
	if (check_sort_a(a) == 0 && !(*b))
		ft_exit(0);
	else
	{
		sort_a_3(a, b, m);
		while ((*b))
			push_b(a, b);
	}
}
