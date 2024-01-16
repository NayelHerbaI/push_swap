/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naherbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:31:44 by naherbal          #+#    #+#             */
/*   Updated: 2024/01/08 16:39:28 by naherbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	free_data(t_data *data)
{
	t_node	*tmp;

	while (data->a != NULL)
	{
		tmp = data->a;
		data->a = data->a->next;
		free(tmp);
	}
	while (data->b != NULL)
	{
		tmp = data->b;
		data->b = data->b->next;
		free(tmp);
	}
	free(data);
}

int	main(int ac, char **av)
{
	t_data	*data;

	if (error_check(ac, av) != 0)
		return (1);
	data = malloc(sizeof(t_data));
	setup(data, ac, av);
	while (is_list_sorted(data) == 1)
	{
		print_list(data);
		sort_numbers(data);
		data->compare_bin *= 2;
		if (data->nb_args == 4)
			break ;
	}
	print_list(data);
	free_data(data);
	return (0);
}
