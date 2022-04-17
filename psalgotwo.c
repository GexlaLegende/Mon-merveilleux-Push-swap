/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   psalgotwo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apercebo <apercebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 12:03:47 by apercebo          #+#    #+#             */
/*   Updated: 2022/04/17 16:28:24 by apercebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free(t_data *data, int nbr)
{
	if (nbr == 0)
	{
		free(data->a);
		free(data->b);
	}
	if (nbr == 1)
	{
		free(data->a);
		free(data->b);
		free(data->c);
	}
	exit(0);
}

void	ft_algotwo(t_data *data, int nbr)
{
	if (data->a[0] > data->a[1] && data->a[1] > data->a[2])
	{
		sa(data, 0);
		rra(data, 0);
	}
	else if (data->a[0] > data->a[1] && data->a[1] < data->a[2])
	{
		if (data->a[0] < data->a[2])
			sa(data, 0);
		else if (data->a[0] > data->a[2])
			ra(data, 0);
	}
	else if (data->a[0] < data->a[1] && data->a[1] > data->a[2])
	{
		if (data->a[0] < data->a[2])
		{
			sa(data, 0);
			ra(data, 0);
		}
		else if (data->a[0] > data->a[2])
			rra(data, 0);
	}
	if (nbr == 0)
		ft_free(data, 0);
}

void	ft_algothree(t_data *data)
{
	if (verifsort(data, data->size_a) == 1)
		ft_free(data, 0);
	pb(data);
	pb(data);
	ft_algotwo(data, 1);
	if ((data->b[0] > data->a[1] && data->b[0] < data->a[2])
		&& (data->b[1] > data->a[1] && data->b[1] < data->b[0]))
	{
		rra(data, 0);
		pa(data);
		pa(data);
		rra(data, 0);
		rra(data, 0);
		ft_free(data, 0);
		return ;
	}
	algohelpone(data);
	algohelptwo(data);
	ft_free(data, 0);
}

void	algohelpone(t_data *data)
{
	if (data->b[0] < data->a[0])
		pa(data);
	else if (data->b[0] < data->a[1])
	{
		ra(data, 0);
		pa(data);
		rra(data, 0);
	}
	else if (data->b[0] < data->a[2])
	{
		rra(data, 0);
		pa(data);
		ra(data, 0);
		ra(data, 0);
	}
	else
	{
		pa(data);
		ra(data, 0);
	}
}

void	algohelptwo(t_data *data)
{
	if (data->b[0] < data->a[0])
		pa(data);
	else if (data->b[0] < data->a[1])
	{
		ra(data, 0);
		pa(data);
		rra(data, 0);
	}
	else if (data->b[0] < data->a[2])
	{
		ra(data, 0);
		ra(data, 0);
		pa(data);
		rra(data, 0);
		rra(data, 0);
	}
	else if (data->b[0] < data->a[3])
	{
		rra(data, 0);
		pa(data);
		ra(data, 0);
		ra(data, 0);
	}
	else
	{
		pa(data);
		ra(data, 0);
	}
}
