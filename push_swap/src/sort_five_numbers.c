/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naherbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:36:29 by naherbal          #+#    #+#             */
/*   Updated: 2023/11/02 13:16:21 by naherbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_five_numbers(t_data *data)
{
	t_node	*curr;
	int		big;
	int		small;

	small = smaller_and_bigger_number_pos(data, 's');
	big = smaller_and_bigger_number_pos(data, 'b');
	curr = data->a;
	if ((big == 4 && small == 0) || (big == 0 && small == 4))
		reverse_rotate_a(data, 1);
	else if ((small == 0 && big == 3) || (small == 3 && big == 0))
		kyle_function(data, small);
	else if ((small == 3 && big == 4) || (small == 4 && big == 3))
		three_four_pos(data, small);
	else if ((small == 0 && big == 1) || (small == 1 && big == 0))
		zero_one_pos(data, small);
	else
		other_sort_five_numbers(data);
}

void	kyle_function(t_data *data, int small)
{
	pb(data);
	reverse_rotate_a(data, 1);
	reverse_rotate_a(data, 1);
	pb(data);
	sort_three_numbers(data);
	if (small == 0)
	{
		pa(data);
		rotate_a(data, 1);
		pa(data);
	}
	else
	{
		pa(data);
		pa(data);
		rotate_a(data, 1);
	}
}

void	three_four_pos(t_data *data, int small)
{
	reverse_rotate_a(data, 1);
	reverse_rotate_a(data, 1);
	pb(data);
	pb(data);
	sort_three_numbers(data);
	pa(data);
	pa(data);
	if (small == 3)
		sa(data, 1);
	rotate_a(data, 1);
}

void	zero_one_pos(t_data *data, int small)
{
	pb(data);
	pb(data);
	sort_three_numbers(data);
	pa(data);
	pa(data);
	if (small == 0)
		sa(data, 1);
	rotate_a(data, 1);
}

int	smaller_and_bigger_number_pos(t_data *data, char c)
{
	int		count;
	t_node	*curr;

	count = 0;
	curr = data->a;
	while (curr->next != NULL)
	{
		if (c == 'b' && curr->s_nb == 4)
			break ;
		if (c == 's' && curr->s_nb == 0)
			break ;
		count++;
		curr = curr->next;
	}
	return (count);
}
