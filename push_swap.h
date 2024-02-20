/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 22:58:03 by ebensalt          #+#    #+#             */
/*   Updated: 2022/06/27 01:07:12 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>

typedef struct s_nood
{
	int				d;
	struct s_nood	*next;
}	t_nood;

typedef struct s_mid
{
	int	a;
	int	b;
	int	c;
	int	d;
	int	e;
	int	f;
	int	g;
	int	h;
}	t_mid;

void	ft_check(int ac, char **av);
int		ft_atoi(const char *str);
void	ft_stack_a(t_nood **a, int ac, char **av);
void	ft_exit(int e);
void	ft_check_0(t_nood *a, int ac);
void	sa(t_nood **a, int i);
void	pa(t_nood **a, t_nood **b);
void	pb(t_nood **a, t_nood **b);
void	ra(t_nood **a, int i);
void	rb(t_nood **b, int i);
void	rra(t_nood **a, int i);
void	rrb(t_nood **b, int i);
void	ft_algo(t_nood **a, t_nood **b, int ac);
t_nood	*ft_new_nood(int d);
void	ft_add_nood(t_nood **nood, int d);
int		check_sort_a(t_nood **a);
void	sort_a_5(t_nood **a, t_nood **b);
void	ft_my_swap(int *a, int *b);
void	sort_a(t_nood **a, t_nood **b, t_mid m);
int		ft_count_nood(t_nood **a);
t_mid	ft_middle(t_nood **a, int n);
void	ft_algo_1(t_nood **a, t_nood **b, t_mid m);
void	push_b(t_nood **a, t_nood **b);
t_mid	ft_middle_1(t_nood **a, int n);
void	ft_algo_2(t_nood **a, t_nood **b);
void	sort_a_3(t_nood **a, t_nood **b, t_mid m);
void	prb(t_nood **a, t_nood	**b);
int		handling(char **av);
char	**ft_split_0(char *s, char c);
int		ft_strlen(char **s);
char	**ft_strjoin(char **s1, char **s2);
char	**ft_split(char const *s, char c);
#endif