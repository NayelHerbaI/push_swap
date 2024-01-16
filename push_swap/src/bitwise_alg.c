/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bitwise_alg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naherbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:29:24 by naherbal          #+#    #+#             */
/*   Updated: 2023/11/02 13:01:40 by naherbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	bitwise_alg(t_data *data)
{
	int		count;
	t_node	*b_curr;

	count = 0;
	b_curr = data->b;
	while (count < data->nb_args)
	{
		if ((data->a->s_nb & data->compare_bin) == 0)
			pb(data);
		else
			rotate_a(data, 1);
		count++;
	}
	while (count > 0)
	{
		pa(data);
		count--;
	}
}
