/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pick_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnayel <hnayel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 18:37:01 by hnayel            #+#    #+#             */
/*   Updated: 2026/01/29 17:00:55 by hnayel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// void	pick_sort(t_data *data)
// {
// 	if (data->nb_args == 2)
// 		swap_two_first(data->a);
// 	else if (data->nb_args == 3)
// 		sort_three(data);
// 	else if (data->nb_args == 4)
// 		sort_four(data);
// 	else if (data->nb_args == 5)
// 		sort_five(data);
// 	else
// 		sort(data);
// }


t_node	*add_new(int nb, int index)
{
	t_node	*new;

	new = malloc(sizeof(t_node));
	if (!new)
		return (NULL);
	new->nb = nb;
	new->s_nb = index;
	new->next = NULL;
	return (new);
}

void	add_front(t_node **list, t_node *new)
{
	new->next = *list;
	*list = new;
}

void	add_back(t_node *list, t_node *new)
{
	t_node		*head;

	head = list;
	while (head->next != NULL)
		head = head->next;
	head->next = new;
}

void	swap_two_first(t_node *list)
{
	int	tmp;

	if (!list || !list->next)
		return ;
	tmp = list->nb;
	list->nb = list->next->nb;
	list->next->nb = tmp;
	write(1, "sa\n", 3);
}

void	put_first_to_last(t_node **list)
{
	t_node	*head;

	if (!list)
		return ;
	head = *list;
	add_back(*list, add_new(head->nb, head->s_nb));
	*list = (*list)->next;
	free(head);
	write(1, "ra\n", 3);
}

int	find_min(t_node *node)
{
	t_node	*head;
	int		number;
	int		spot;
	int		keep_spot;

	spot = 1;
	keep_spot = 1;
	number = node->nb;
	head = node;
	while (head)
	{
		if (head->nb < number)
		{
			number = head->nb;
			keep_spot = spot;
		}
		spot++;
		head = head->next;
	}
	return (keep_spot);
}

int	find_max(t_node *node)
{
	t_node	*head;
	int		number;
	int		spot;
	int		keep_spot;

	spot = 1;
	keep_spot = 1;
	number = node->nb;
	head = node;
	while (head)
	{
		if (head->nb > number)
		{
			number = head->nb;
			keep_spot = spot;
		}
		spot++;
		head = head->next;
	}
	return (keep_spot);
}

void	sort_three(t_data *data)
{
	int	min;
	int	max;

	min = find_min(data->a);
	max = find_max(data->a);
	if (min == 1)
	{
		swap_two_first(data->a);
		put_first_to_last(&data->a);
	}
	if (max == 1 && min == 3)
	{
		swap_two_first(data->a);
		put_last_to_first(&data->a);
	}
	if (max == 1 && min == 2)
		put_first_to_last(&data->a);
	if (max == 3 && min == 2)
		swap_two_first(data->a);
	if (max == 2 && min == 3)
		put_last_to_first(&data->a);
}

void	sort_four(t_data *data)
{
	int	min;
	int	max;

	min = find_min(data->a);
	max = find_max(data->a);
	if (min == 1)
		push_a_to_b(data);
	else if (min == 2)
	{
		swap_two_first(data->a);
		push_a_to_b(data);
	}
	else if (min == 4)
	{
		put_last_to_first(&data->a);
		push_a_to_b(data);
	}
	else if (min == 3)
	{
		put_first_to_last(&data->a);
		put_first_to_last(&data->a);
		push_a_to_b(data);
	}
	sort_three(data);
	push_b_to_a(data);
}


// void	sort_four(t_data *data);
// void	sort_three(t_data *data);
// int	find_max(t_node *node);
// int	find_min(t_node *node);
// void	put_first_to_last(t_node **list);
// void	swap_two_first(t_node *list);
// void	add_front(t_node **list, t_node *new);
// void	pick_sort(t_data *data);
void	put_last_to_first(t_node **list)
{
	t_node	*head;

	if (!list)
		return ;
	head = *list;
	while (head->next)
		head = head->next;
	add_front(list, add_new(head->nb, head->s_nb));
	head = *list;
	while (head->next->next)
		head = head->next;
	free(head->next);
	head->next = NULL;
	write(1, "rra\n", 4);
}

void	push_a_to_b(t_data *data)
{
	t_node	*head;

	if (!data->a)
		return ;
	add_front(&data->b, add_new(data->a->nb, data->a->s_nb));
	head = data->a;
	data->a = head->next;
	free(head);
	write(1, "pb\n", 3);
}

void	push_b_to_a(t_data *data)
{
	t_node	*head;

	if (!data->b)
		return ;
	add_front(&data->a, add_new(data->b->nb, data->b->s_nb));
	head = data->b;
	data->b = head->next;
	free(head);
	write(1, "pa\n", 3);
}

void	put_min_max_up(t_data *data)
{
	while (find_min(data->a) != 1)
	{
		if (find_min(data->a) > 3)
			put_last_to_first(&data->a);
		if (find_min(data->a) == 3)
			put_first_to_last(&data->a);
		if (find_min(data->a) == 2)
			swap_two_first(data->a);
	}
	push_a_to_b(data);
	while (find_max(data->a) != 1)
	{
		if (find_max(data->a) > 3)
			put_last_to_first(&data->a);
		if (find_max(data->a) == 3)
			put_first_to_last(&data->a);
		if (find_max(data->a) == 2)
			swap_two_first(data->a);
	}
	push_a_to_b(data);
}

void	sort_five(t_data *data)
{
	put_min_max_up(data);
	if (is_sorted(data->a) == 0)
		sort_three(data);
	push_b_to_a(data);
	push_b_to_a(data);
	if (find_min(data->a) == 1)
		swap_two_first(data->a);
	put_first_to_last(&data->a);
}

int	is_sorted(t_node *a)
{
	t_node	*head;
	int		cmp;

	cmp = a->nb;
	head = a->next;
	while (head)
	{
		if (cmp > head->nb)
			return (0);
		cmp = head->nb;
		head = head->next;
	}
	return (1);
}