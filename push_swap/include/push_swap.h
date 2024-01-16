/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naherbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 17:52:56 by naherbal          #+#    #+#             */
/*   Updated: 2023/11/02 13:15:57 by naherbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

typedef struct s_node
{
	int				nb;
	int				s_nb;
	struct s_node	*next;
}				t_node;

typedef struct s_data
{
	t_node	*a;
	t_node	*b;
	int		compare_bin;
	int		empty_b;
	int		nb_args;
}			t_data;

void				setup(t_data *data, int ac, char **av);
long long int		ft_atoi(char *str);
char				*ft_convert_base(char *nbr);
char				*ft_itoa(int n);
void				ft_strrev(char *str);
void				print_list(t_data *data);
void				setup_a(t_data *data, int ac, char **av);
void				fill_list(t_data *data, int value);
int					sa(t_data *data, int bin);
int					sb(t_data *data, int bin);
void				ss(t_data *data);
void				pa(t_data *data);
void				pb(t_data *data);
void				empty_b(t_data *data);
void				fill_b(t_data *data);
void				empty_a(t_data *data);
int					rotate_a(t_data *data, int bin);
int					rotate_b(t_data *data, int bin);
void				rr(t_data *data);
int					reverse_rotate_a(t_data *data, int bin);
int					reverse_rotate_b(t_data *data, int bin);
void				rrr(t_data *data);
void				create_numbers_from_zero(t_data *data);
int					error_check(int ac, char **av);
int					check_string_arg(char *str);
int					check_dup(char **av);
int					number_check(int ac, char **av);
int					check_int_min_max(int ac, char **av);
int					is_list_sorted(t_data *data);
void				sort_numbers(t_data *data);
void				sort_three_numbers(t_data *data);
void				handle_biggest_in_middle(t_data *data);
void				bitwise_alg(t_data *data);
char				**ft_split(char *s, char c);
void				string_args(t_data *data, char **av);
void				sort_five_numbers(t_data *data);
void				other_sort_five_numbers(t_data *data);
int					get_to_three(t_data *data);
void				sort_two_numbers(t_data *data);
int					zero_at_the_end(t_data *data);
int					smaller_and_bigger_number_pos(t_data *data, char c);
void				zero_one_pos(t_data *data, int small);
void				three_four_pos(t_data *data, int small);
void				kyle_function(t_data *data, int small);

#endif
