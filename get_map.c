/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jepoujol <jepoujol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 16:43:02 by jepoujol          #+#    #+#             */
/*   Updated: 2019/05/25 20:22:10 by jepoujol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./primekey.h"

void	get_pos(t_lst *elem, char *str)
{
	int		i;
	int		j;
	char	*tmp;

	i = -1;
	j = 0;
	while (str[++i] && j < 4)
	{
		if ((str[i] == elem->l[0]) && (str[i + 1] == elem->l[1]))
		{
			elem->pos[j] = i;
			printf("pos[%d] = %d\n",j, i);
			j++;
		}
	}
	while (j < 4)
	{
		elem->pos[j] = -1;
		j++;
	}
	ft_putendl(".......");
}
