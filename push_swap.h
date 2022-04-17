/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apercebo <apercebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 09:10:09 by apercebo          #+#    #+#             */
/*   Updated: 2022/04/17 16:29:09 by apercebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf/ft_printf.h"
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_data
{
	int	*a;
	int	*b;
	int	*c;
	int	size_a;
	int	size_b;
	int	i;
	int	y;
}		t_data;

void	sa(t_data *data, int nbr);
void	sb(t_data *data, int nbr);
void	ss(t_data *data);
int		pa(t_data *data);
int		pb(t_data *data);
void	ra(t_data *data, int nbr);
void	rb(t_data *data, int nbr);
void	rr(t_data *data);
void	rra(t_data *data, int nbr);
void	rrb(t_data *data, int nbr);
void	rrr(t_data *data);
void	ft_errors(t_data *data);
int		ft_atoi(const char *str, t_data *data);
int		ft_realatoi(const char *str, t_data *data, int neg);
int		verifduo(t_data *data);
void	ft_algotwo(t_data *data, int nbr);
void	ft_algothree(t_data *data);
void	algohelpone(t_data *data);
void	algohelptwo(t_data *data);
void	ft_algomain(t_data *data);
void	ft_algoreplace(t_data *data);
int		verifsort(t_data *data, int size);
void	ft_radix(t_data *data);
void	ft_free(t_data *data, int nbr);
void	ft_diffalgo(t_data *data, int argc);
void	ft_algosecond(t_data *data);
void	ft_algofour(t_data *data);

#endif