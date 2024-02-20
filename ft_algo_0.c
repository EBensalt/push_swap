/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_0.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 14:00:26 by ebensalt          #+#    #+#             */
/*   Updated: 2022/06/24 16:29:25 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_mid	ft_middle_0(int i, int n, int j, int *s)
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
	m.a = s[n / 7];
	m.b = s[(n / 7) * 2];
	m.c = s[(n / 7) * 3];
	m.d = s[(n / 7) * 4];
	m.e = s[(n / 7) * 5];
	m.f = s[(n / 7) * 6];
	m.g = 0;
	m.h = 0;
	free(s);
	return (m);
}

t_mid	ft_middle(t_nood **a, int n)
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
	m = ft_middle_0(i, n, j, s);
	return (m);
}
