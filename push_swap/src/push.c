/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naherbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:40:58 by naherbal          #+#    #+#             */
/*   Updated: 2023/10/25 14:12:23 by naherbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	pa(t_data *data)
{
	if (data->b)
		empty_a(data);
}

void	empty_a(t_data *data)
{
	t_node	*a_head;
	t_node	*b_head;

	a_head = data->a;
	b_head = data->b;
	data->b = data->b->next;
	data->a = b_head;
	b_head->next = a_head;
	write(1, "pa\n", 3);
}

void	pb(t_data *data)
{
	if (data->empty_b == 1 && data->a)
		empty_b(data);
	else if (data->a)
		fill_b(data);
}

void	empty_b(t_data *data)
{
	t_node	*tmp;

	data->b->nb = data->a->nb;
	data->b->s_nb = data->a->s_nb;
	data->b->next = NULL;
	data->empty_b = 0;
	tmp = data->a;
	data->a = data->a->next;
	free(tmp);
	write(1, "pb\n", 3);
}

void	fill_b(t_data *data)
{
	t_node	*a_head;
	t_node	*b_head;

	a_head = data->a;
	b_head = data->b;
	data->a = data->a->next;
	data->b = a_head;
	a_head->next = b_head;
	write(1, "pb\n", 3);
}
