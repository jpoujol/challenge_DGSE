/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_pushback.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jepoujol <jepoujol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 16:26:08 by jepoujol          #+#    #+#             */
/*   Updated: 2019/05/25 20:14:06 by jepoujol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./primekey.h"

static t_lst	*ft_creat_elem(int id, char *str, char *let)
{
	t_lst	*data;

	data = NULL;
	if (!(data = (t_lst*)malloc(sizeof(t_lst))))
		return (NULL);
	// if (!(data->l = ft_strnew(2)))
	// 	return (NULL);
	data->l[0] = let[0];
	data->l[1] = let[1];
	data->pos = (int*)malloc(sizeof(int) * 4);
	data->id =	id;
	ft_putendl("before get_pos");
	get_pos(data, str);
	ft_putendl("after get_pos");
	ft_create_map(data, id);
	ft_putendl("after create elem");
	data->next = NULL;
	return (data);
}

void	ft_list_push_back(t_lst **begin, int id, char *str, char *let)
{
	t_lst	*last;

	if (*begin)
	{
		last = *begin;
		while (last->next)
			last = last->next;
		last->next = ft_creat_elem(id, str, let);
	}
	else
	{
		*begin = ft_creat_elem(id, str, let);
	}
}
