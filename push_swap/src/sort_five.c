/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnayel <hnayel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 14:55:13 by hnayel            #+#    #+#             */
/*   Updated: 2026/01/06 09:27:27 by hnayel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	put_min_max_up(t_data *data)
{
	while (find_min(data->a) != 1)
	{
		if (find_min(data->a) > 3)
			put_last_to_first(&data->a);
		if (find_min(data->a) == 3)
			put_first_to_last(&data->a);
		if (find_min(data->a) == 2)
			swap_two_first(data->a);
	}
	push_a_to_b(data);
	while (find_max(data->a) != 1)
	{
		if (find_max(data->a) > 3)
			put_last_to_first(&data->a);
		if (find_max(data->a) == 3)
			put_first_to_last(&data->a);
		if (find_max(data->a) == 2)
			swap_two_first(data->a);
	}
	push_a_to_b(data);
}

void	sort_five(t_data *data)
{
	put_min_max_up(data);
	if (is_sorted(data->a) == 0)
		sort_three(data);
	push_b_to_a(data);
	push_b_to_a(data);
	if (find_min(data->a) == 1)
		swap_two_first(data->a);
	put_first_to_last(&data->a);
}
