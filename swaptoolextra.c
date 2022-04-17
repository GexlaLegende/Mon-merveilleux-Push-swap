/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaptoolextra.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apercebo <apercebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 09:49:56 by apercebo          #+#    #+#             */
/*   Updated: 2022/04/12 15:57:04 by apercebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_data *data, int nbr)
{
	int	stock;
	int	i;

	stock = data->a[0];
	i = 1;
	while (i < data->size_a)
	{
		data->a[i - 1] = data->a[i];
		i++;
	}
	data->a[i - 1] = stock;
	if (nbr != 1)
		ft_printf("ra\n");
}

void	rb(t_data *data, int nbr)
{
	int	stock;
	int	i;

	stock = data->b[0];
	i = 1;
	while (i < data->size_b)
	{
		data->b[i - 1] = data->b[i];
		i++;
	}
	data->b[i - 1] = stock;
	if (nbr != 1)
		ft_printf("rb\n");
}

void	rr(t_data *data)
{
	ra(data, 1);
	rb(data, 1);
	ft_printf("rr\n");
}

int	ft_atoi(const char *str, t_data *data)
{
	int			i;
	int			neg;

	i = 0;
	neg = 1;
	if (!((str[i] >= 48 && str[i] <= 57) || str[i] == '-' || str[i] == '+'))
		return (1);
	if (str[i] == '-')
		neg *= -1;
	if (str[i++] == '+')
		neg *= 1;
	while (str[i])
	{
		if (str[i] < 48 || str[i] > 57)
			return (1);
		i++;
	}
	i = ft_realatoi(str, data, neg);
	if (i == 1)
		return (1);
	return (0);
}

int	ft_realatoi(const char *str, t_data *data, int neg)
{
	long long int	result;
	int				i;

	result = 0;
	i = 0;
	if (neg < 0)
		i++;
	if (str[i] == '+')
		i++;
	if (!str[i])
		return (1);
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	if (result > 2147483647 || result < -2147483647)
		return (1);
	data->a[data->i] = result * neg;
	return (0);
}
