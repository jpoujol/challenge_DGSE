/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   link_lst.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jepoujol <jepoujol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 18:51:11 by jepoujol          #+#    #+#             */
/*   Updated: 2019/05/25 20:21:45 by jepoujol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./primekey.h"

static t_linked_lst		link_lst(t_lst **begin_lstFB, t_lst **begin_lst66, t_lst **begin_lst12,
	t_lst **begin_lst54, t_lst **begin_lst57, t_lst **begin_lstCD)
{
	int		i;
	t_linked_lst	link;

	link.lstFB = begin_lstFB;
	link.lst66 = begin_lst66;
	link.lst12 = begin_lst12;
	link.lst54 = begin_lst54;
	link.lst57 = begin_lst57;
	link.lstCD = begin_lstCD;
	i = -1;
	ft_putendl("return LINK");
	return (link);
}


t_linked_lst	get_all_lst(char *str)
{
	t_lst	*lstFB;
	t_lst	*lst66;
	t_lst	*lst12;
	t_lst	*lst54;
	t_lst	*lst57;
	t_lst	*lstCD;
	int		i;

	lstFB = NULL;
	lst66 = NULL;
	lst12 = NULL;
	lst54 = NULL;
	lst57 = NULL;
	lstCD = NULL;
	i = -1;
	while (++i < 16)
		ft_list_push_back(&lstFB, i, str, "fb");
	i = -1;
	while (++i < 2)
		ft_list_push_back(&lst66, i, str, "66");
	i = -1;
	while (++i < 2)
		ft_list_push_back(&lst12, i, str, "12");
	i = -1;
	while (++i < 2)
		ft_list_push_back(&lst54, i, str, "54");
	i = -1;
	while (++i < 8)
		ft_list_push_back(&lst57, i, str, "57");
	i = -1;
	while (++i < 4)
		ft_list_push_back(&lstCD, i, str, "cd");
	return (link_lst(&lstFB, &lst66, &lst12, &lst54, &lst57, &lstCD));
}
