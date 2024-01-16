/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naherbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:57:24 by naherbal          #+#    #+#             */
/*   Updated: 2023/10/23 16:46:19 by naherbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	reverse_rotate_a(t_data *data, int bin)
{
	t_node	*dernier;
	t_node	*avant_dernier;
	t_node	*head;

	if (data->a && data->a->next)
	{
		head = data->a;
		dernier = data->a;
		while (dernier->next->next != NULL)
			dernier = dernier->next;
		avant_dernier = dernier;
		dernier = dernier->next;
		dernier->next = data->a;
		avant_dernier->next = NULL;
		data->a = dernier;
		if (bin == 1)
			write(1, "rra\n", 4);
		return (0);
	}
	else
		return (1);
}

int	reverse_rotate_b(t_data *data, int bin)
{
	t_node	*dernier;
	t_node	*avant_dernier;
	t_node	*head;

	if (data->b && data->b->next)
	{
		head = data->b;
		dernier = data->b;
		while (dernier->next->next != NULL)
			dernier = dernier->next;
		avant_dernier = dernier;
		dernier = dernier->next;
		dernier->next = data->b;
		avant_dernier->next = NULL;
		data->b = dernier;
		if (bin == 1)
			write(1, "rrb\n", 4);
		return (0);
	}
	else
		return (1);
}

void	rrr(t_data *data)
{
	if (reverse_rotate_a(data, 0) == 0 && reverse_rotate_b(data, 0) == 0)
		write(1, "rrr\n", 4);
}
