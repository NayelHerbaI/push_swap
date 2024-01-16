/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naherbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:57:24 by naherbal          #+#    #+#             */
/*   Updated: 2023/11/01 12:42:43 by naherbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	rotate_a(t_data *data, int bin)
{
	t_node	*curr;
	int		first;
	int		tmp;

	tmp = bin;
	curr = data->a;
	first = data->a->s_nb;
	while (curr->next != NULL)
	{
		curr->s_nb = curr->next->s_nb;
		curr = curr->next;
	}
	curr->s_nb = first;
	if (bin == 1)
		write(1, "ra\n", 3);
	return (0);
}

int	rotate_b(t_data *data, int bin)
{
	t_node	*curr;
	int		first;
	int		tmp;

	tmp = bin;
	curr = data->b;
	first = data->b->s_nb;
	while (curr->next != NULL)
	{
		curr->s_nb = curr->next->s_nb;
		curr = curr->next;
	}
	curr->s_nb = first;
	if (bin == 1)
		write(1, "rb\n", 3);
	return (0);
}

void	rr(t_data *data)
{
	if (rotate_a(data, 0) == 0 && rotate_b(data, 0) == 0)
		write(1, "rr\n", 3);
}
