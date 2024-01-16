/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_list_sorted.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naherbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:47:47 by naherbal          #+#    #+#             */
/*   Updated: 2023/11/01 14:26:08 by naherbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	is_list_sorted(t_data *data)
{
	t_node	*head;

	head = data->a;
	while (head->next != NULL)
	{
		if (head->s_nb > head->next->s_nb)
			return (1);
		head = head->next;
	}
	return (0);
}
