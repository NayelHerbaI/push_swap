/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_three_numbers.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naherbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:40:34 by naherbal          #+#    #+#             */
/*   Updated: 2023/11/02 13:01:03 by naherbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_three_numbers(t_data *data)
{
	int	f_nb;
	int	s_nb;
	int	t_nb;

	f_nb = data->a->s_nb;
	s_nb = data->a->next->s_nb;
	t_nb = data->a->next->next->s_nb;
	if (f_nb > s_nb && f_nb > t_nb && s_nb < t_nb)
		rotate_a(data, 1);
	else if (f_nb > s_nb && f_nb > t_nb)
	{
		reverse_rotate_a(data, 1);
		reverse_rotate_a(data, 1);
		sa(data, 1);
	}
	else if (f_nb > s_nb && s_nb < t_nb)
		sa(data, 1);
	else if (s_nb > f_nb && s_nb > t_nb)
		handle_biggest_in_middle(data);
}

void	handle_biggest_in_middle(t_data *data)
{
	int	f_nb;
	int	s_nb;
	int	t_nb;

	f_nb = data->a->s_nb;
	s_nb = data->a->next->s_nb;
	t_nb = data->a->next->next->s_nb;
	if (f_nb < t_nb)
	{
		reverse_rotate_a(data, 1);
		sa(data, 1);
	}
	else
		reverse_rotate_a(data, 1);
}
