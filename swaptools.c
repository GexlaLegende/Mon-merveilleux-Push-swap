/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaptools.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apercebo <apercebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 09:09:16 by apercebo          #+#    #+#             */
/*   Updated: 2022/04/16 20:25:10 by apercebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_data *data, int nbr)
{
	int	swap;

	swap = data->a[0];
	data->a[0] = data->a[1];
	data->a[1] = swap;
	if (nbr != 1)
		ft_printf("sa\n");
}

void	sb(t_data *data, int nbr)
{
	int	swap;

	swap = data->b[0];
	data->b[0] = data->b[1];
	data->b[1] = swap;
	if (nbr != 1)
		ft_printf("sb\n");
}

void	ss(t_data *data)
{
	sa(data, 1);
	sb(data, 1);
	ft_printf("ss\n");
}

int	pa(t_data *data)
{
	int	i;
	int	stock;

	i = 1;
	if (data->size_b == 0)
		return (1);
	stock = data->b[0];
	while (i < data->size_b)
	{
		data->b[i - 1] = data->b[i];
		i++;
	}
	i = data->size_a - 1;
	while (i >= 0)
	{
		data->a[i + 1] = data->a[i];
		i--;
	}
	data->a[0] = stock;
	ft_printf("pa\n");
	data->size_b = data->size_b - 1;
	data->size_a = data->size_a + 1;
	return (0);
}

int	pb(t_data *data)
{
	int	i;
	int	stock;

	i = 1;
	if (data->size_a == 0)
		return (1);
	stock = data->a[0];
	while (i < data->size_a)
	{
		data->a[i - 1] = data->a[i];
		i++;
	}
	i = data->size_b - 1;
	while (i >= 0)
	{
		data->b[i + 1] = data->b[i];
		i--;
	}
	data->b[0] = stock;
	ft_printf("pb\n");
	data->size_a = data->size_a - 1;
	data->size_b = data->size_b + 1;
	return (0);
}
