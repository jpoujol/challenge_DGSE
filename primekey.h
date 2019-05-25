/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   primekey.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jepoujol <jepoujol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 16:00:24 by jepoujol          #+#    #+#             */
/*   Updated: 2019/05/25 20:14:15 by jepoujol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRIMEKEY_H
# define PRIMEKEY_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include "./libft/libft.h"

typedef struct			s_lst
{
	char				l[2]; // letter of replacement
	char				*map; // res of replacement
	int					id;
	int					*pos; //coor of letters to replace
	struct s_lst		*next;
}						t_lst;

typedef struct			s_linked_lst
{
	t_lst	**lstFB;
	t_lst	**lst66;
	t_lst	**lst12;
	t_lst	**lst54;
	t_lst	**lst57;
	t_lst	**lstCD;
}						t_linked_lst;


//PROTOTYPE
void				ft_list_push_back(t_lst **begin, int id, char *str, char *let);
t_linked_lst		get_all_lst(char *str);
void				ft_create_map(t_lst *lst, int possibility);
void				get_pos(t_lst *elem, char *str);

#endif
