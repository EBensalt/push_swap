/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 23:06:17 by ebensalt          #+#    #+#             */
/*   Updated: 2022/06/27 02:43:31 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_exit(int e)
{
	if (e == 1)
		write(2, "Error\n", 7);
	exit(e);
}

void	ft_check(int ac, char **av)
{
	int	i;

	if (ac == 1)
		ft_exit(0);
	while (--ac > 0)
	{
		if (av[ac][0] == '\0')
			ft_exit(1);
		i = -1;
		while (av[ac][++i])
		{
			if (av[ac][0] != 45 && (av[ac][i] < 48 || av[ac][i] > 57))
				ft_exit(1);
			if (av[ac][0] == 45 && !av[ac][1])
				ft_exit(1);
			if ((av[ac][0] == 45 && av[ac][i + 1])
				&& (av[ac][i + 1] < 48 || av[ac][i + 1] > 57))
				ft_exit(1);
		}
	}
}

t_nood	*ft_new_nood(int d)
{
	t_nood	*nood;

	nood = malloc(sizeof(t_nood));
	nood->d = d;
	nood->next = NULL;
	return (nood);
}

void	ft_add_nood(t_nood **nood, int d)
{
	t_nood	*ptr;
	t_nood	*ptr0;

	ptr = ft_new_nood(d);
	ptr0 = *nood;
	while (ptr0->next)
		ptr0 = ptr0->next;
	ptr0->next = ptr;
}

void	ft_stack_a(t_nood **a, int ac, char **av)
{
	int		i;

	*a = ft_new_nood(ft_atoi(av[1]));
	i = 1;
	while (--ac > 1)
		ft_add_nood(a, ft_atoi(av[++i]));
}
