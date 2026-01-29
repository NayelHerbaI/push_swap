/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_numbers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnayel <hnayel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:00:42 by naherbal          #+#    #+#             */
/*   Updated: 2026/01/29 17:59:25 by hnayel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_numbers(t_data *data)
{
	if (data->nb_args == 2)
	{
		swap_two_first(data->a);
		exit(1);
	}
	else if (data->nb_args == 3)
		sort_three(data);
	else if (data->nb_args == 4)
		sort_four(data);
	else if (data->nb_args == 5)
		sort_five(data);
	else if (data->nb_args > 5)
		bitwise_alg(data);
}

void	sort_two_numbers(t_data *data)
{
	if (data->a->s_nb > data->a->next->s_nb)
		sa(data, 1);
}
