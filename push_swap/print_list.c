/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naherbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:46:28 by naherbal          #+#    #+#             */
/*   Updated: 2023/11/02 13:21:13 by naherbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	print_list(t_data *data)
{
	t_node	*a;
	t_node	*b;

	a = data->a;
	b = data->b;
	printf("------------	A	-------------\n\n");
	while (a != NULL)
	{
		printf("%d\n", a->nb);
		a = a->next;
	}
	printf("\n-------------	B	-------------\n\n");
	while (b != NULL)
	{
		printf("%d\n", b->nb);
		b = b->next;
	}
	a = data->a;
	printf("\n-------------	SA	------------\n\n");
	while (a != NULL)
	{
		printf("%d\n", a->s_nb);
		a = a->next;
	}
	printf("\n-------------	SB	------------\n\n");
	b = data->b;
	while (b != NULL)
	{
		printf("%d\n", b->s_nb);
		b = b->next;
	}
	printf("\n-------------------------------------\n");
}
