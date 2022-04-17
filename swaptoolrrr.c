/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaptoolrrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apercebo <apercebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 10:05:06 by apercebo          #+#    #+#             */
/*   Updated: 2022/04/17 16:29:42 by apercebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_data *data, int nbr)
{
	int	stock;
	int	i;

	stock = data->a[data->size_a - 1];
	i = data->size_a - 2;
	while (i >= 0)
	{
		data->a[i + 1] = data->a[i];
		i--;
	}
	data->a[i + 1] = stock;
	if (nbr != 1)
		ft_printf("rra\n");
}

void	rrb(t_data *data, int nbr)
{
	int	stock;
	int	i;

	stock = data->b[data->size_b - 1];
	i = data->size_b - 2;
	while (i >= 0)
	{
		data->b[i + 1] = data->b[i];
		i--;
	}
	data->b[i + 1] = stock;
	if (nbr != 1)
		ft_printf("rrb\n");
}

void	rrr(t_data *data)
{
	rra(data, 1);
	rrb(data, 1);
	ft_printf("rrr\n");
}

void	ft_algosecond(t_data *data)
{
	if (data->a[0] > data->a[1])
		sa(data, 0);
	ft_free(data, 0);
}

void	ft_algofour(t_data *data)
{
	if (verifsort(data, data->size_a) == 1)
		ft_free(data, 0);
	pb(data);
	ft_algotwo(data, 1);
	algohelpone(data);
	ft_free(data, 0);
}
