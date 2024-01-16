/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_numbers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naherbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:00:42 by naherbal          #+#    #+#             */
/*   Updated: 2023/11/22 17:30:38 by naherbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_numbers(t_data *data)
{
	if (data->nb_args == 2)
		sort_two_numbers(data);
	if (data->nb_args == 3)
		sort_three_numbers(data);
	if (data->nb_args == 5)
		sort_five_numbers(data);
	if (data->nb_args > 5)
		bitwise_alg(data);
}

void	sort_two_numbers(t_data *data)
{
	if (data->a->s_nb > data->a->next->s_nb)
		sa(data, 1);
}
