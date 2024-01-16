/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   second_sort_five_numbers.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naherbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:02:59 by naherbal          #+#    #+#             */
/*   Updated: 2023/11/02 13:03:19 by naherbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	other_sort_five_numbers(t_data *data)
{
	int	i;

	i = zero_at_the_end(data);
	while (get_to_three(data) == 1)
	{
		if (data->a->s_nb == 0 || data->a->s_nb == 1)
			pb(data);
		else if (i == 0)
			rotate_a(data, 1);
		else
			reverse_rotate_a(data, 1);
	}
	sort_three_numbers(data);
	if (data->b->s_nb == 0)
		sb(data, 1);
	pa(data);
	pa(data);
}

int	zero_at_the_end(t_data *data)
{
	t_node	*curr;

	curr = data->a;
	while (curr->next->next != NULL)
		curr = curr->next;
	if (curr->s_nb == 0 || curr->next == 0)
		return (1);
	return (0);
}

int	get_to_three(t_data *data)
{
	t_node	*curr;
	int		count;

	count = 1;
	curr = data->a;
	while (curr->next != NULL)
	{
		curr = curr->next;
		count++;
	}
	if (count == 3)
		return (0);
	return (1);
}
