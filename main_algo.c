/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apercebo <apercebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 13:35:00 by apercebo          #+#    #+#             */
/*   Updated: 2022/04/12 15:36:59 by apercebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_algomain(t_data *data)
{
	int	i;
	int	j;
	int	nbr;

	i = 0;
	data->c = malloc(sizeof(int) * (data->size_a));
	if (!data->c)
		exit(0);
	while (i < data->size_a)
	{
		nbr = data->a[i];
		data->c[i] = 0;
		j = 0;
		while (j < data->size_a)
		{
			if (data->a[j] <= nbr)
				data->c[i] = data->c[i] + 1;
			j++;
		}
		i++;
	}
	ft_algoreplace(data);
	ft_radix(data);
	ft_free(data, 1);
}

void	ft_radix(t_data *data)
{
	int	nbr;
	int	i;
	int	j;

	nbr = data->size_a;
	i = 0;
	while (verifsort(data, nbr) == 0)
	{
		j = 0;
		while (j < nbr)
		{
			if ((data->a[0] >> i) & 1)
				ra(data, 0);
			else
				pb(data);
			j++;
		}
		i++;
		while (data->size_b != 0)
			pa(data);
	}
}

void	ft_algoreplace(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->size_a)
	{
		data->a[i] = data->c[i];
		i++;
	}
}

int	verifsort(t_data *data, int size)
{
	int	i;

	i = 1;
	while (i < size)
	{
		if (data->a[i] < data->a[i - 1])
			return (0);
		i++;
	}
	return (1);
}
