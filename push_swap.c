/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apercebo <apercebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 09:13:57 by apercebo          #+#    #+#             */
/*   Updated: 2022/04/17 16:25:00 by apercebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_data	data;

	if (argc < 2)
		return (0);
	data.a = malloc(sizeof(int) * (argc - 1));
	if (!data.a)
		exit(0);
	data.b = malloc(sizeof(int) * (argc - 1));
	if (!data.b)
		exit(0);
	data.size_a = argc - 1;
	data.i = 0;
	data.y = 1;
	while (data.i < argc - 1)
	{
		if (ft_atoi(argv[data.y], &data) == 1)
			ft_errors(&data);
		if (verifduo(&data) == 1)
			ft_errors(&data);
		data.i = data.i + 1;
		data.y = data.y + 1;
	}
	ft_diffalgo(&data, argc);
	return (0);
}

void	ft_diffalgo(t_data *data, int argc)
{
	if (argc == 4)
		ft_algotwo(data, 0);
	else if (argc == 6)
		ft_algothree(data);
	else if (argc == 3)
		ft_algosecond(data);
	else if (argc == 5)
		ft_algofour(data);
	else
		ft_algomain(data);
}

void	ft_errors(t_data *data)
{
	free(data->a);
	free(data->b);
	write(2, "Error\n", 6);
	exit(0);
}

int	verifduo(t_data *data)
{
	int	numbr;

	numbr = data->i - 1;
	while (numbr > -1)
	{
		if (data->a[numbr] == data->a[data->i])
			return (1);
		numbr--;
	}
	return (0);
}
