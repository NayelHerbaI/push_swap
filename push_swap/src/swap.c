/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naherbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:29:57 by naherbal          #+#    #+#             */
/*   Updated: 2023/10/25 14:14:33 by naherbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	sa(t_data *data, int bin)
{
	int	tmp;

	if (data->a && data->a->next)
	{
		tmp = data->a->nb;
		data->a->nb = data->a->next->nb;
		data->a->next->nb = tmp;
		tmp = data->a->s_nb;
		data->a->s_nb = data->a->next->s_nb;
		data->a->next->s_nb = tmp;
		if (bin == 1)
			write(1, "sa\n", 3);
		return (0);
	}
	else
		return (1);
}

int	sb(t_data *data, int bin)
{
	int	tmp;

	if (data->b && data->b->next)
	{
		tmp = data->b->nb;
		data->b->nb = data->b->next->nb;
		data->b->next->nb = tmp;
		tmp = data->b->s_nb;
		data->b->s_nb = data->b->next->s_nb;
		data->b->next->s_nb = tmp;
		if (bin == 1)
			write(1, "sb\n", 3);
		return (0);
	}
	else
		return (1);
}

void	ss(t_data *data)
{
	if (sa(data, 0) == 0 && sb(data, 0) == 0)
		write(1, "ss\n", 3);
}
