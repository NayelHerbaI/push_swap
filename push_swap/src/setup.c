/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naherbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:45:11 by naherbal          #+#    #+#             */
/*   Updated: 2023/11/22 14:34:46 by naherbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	setup(t_data *data, int ac, char **av)
{
	data->a = malloc(sizeof(t_node));
	data->b = malloc(sizeof(t_node));
	data->empty_b = 1;
	data->compare_bin = 1;
	data->nb_args = ac - 1;
	if (ac == 2)
		string_args(data, av);
	else
		setup_a(data, ac, av);
	create_numbers_from_zero(data);
}

void	setup_a(t_data *data, int ac, char **av)
{
	int		i;

	data->a->nb = ft_atoi(av[1]);
	data->a->next = NULL;
	i = 2;
	while (i < ac)
		fill_list(data, ft_atoi(av[i++]));
}

void	fill_list(t_data *data, int value)
{
	t_node	*curr;

	curr = data->a;
	while (curr->next != NULL)
		curr = curr->next;
	curr->next = malloc(sizeof(t_node));
	curr->next->nb = value;
	curr->next->next = NULL;
}

void	string_args(t_data *data, char **av)
{
	char	**tab;
	int		i;

	tab = ft_split(av[1], ' ');
	i = 1;
	data->a->nb = ft_atoi(tab[0]);
	data->a->next = NULL;
	while (tab[i])
		fill_list(data, ft_atoi(tab[i++]));
	data->nb_args = i;
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}
