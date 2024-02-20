/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 22:57:39 by ebensalt          #+#    #+#             */
/*   Updated: 2022/06/27 14:16:18 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

t_nood	*main0(int ac, char **av, t_nood *a, t_nood *b)
{
	ft_check(ac, av);
	ft_stack_a(&a, ac, av);
	ft_check_0(a, ac);
	ft_algo(&a, &b, ac);
	return (a);
}

int	main(int ac, char **av)
{
	t_nood	*a;
	t_nood	*b;
	char	**av1;
	char	**av0;
	int		ac0;

	b = NULL;
	a = NULL;
	if (handling(av) == 0)
	{
		ac0 = 2;
		av0 = ft_split_0(av[1], 32);
		while (ac0 < ac)
		{
			if (av[ac0][0] == '\0')
				ft_exit(1);
			av1 = ft_split(av[ac0], 32);
			av0 = ft_strjoin(av0, av1);
			ac0++;
		}
		ac0 = ft_strlen(av0);
		a = main0(ac0, av0, a, b);
	}
	else
		a = main0(ac, av, a, b);
}
