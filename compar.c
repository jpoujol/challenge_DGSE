/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compar.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmerieux <hmerieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 18:33:30 by hmerieux          #+#    #+#             */
/*   Updated: 2019/05/25 20:02:06 by jepoujol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./primekey.h"

void	ft_create_map(t_lst *lst, int possibility)
{
	int pos = 0;
	int	i = 1;
	char *prime = "00fb40dc44ba03d15342f75908e0f9300596644ade94685e08e28c9ab1640c2f62c29ab9a239824b9ebeeb76ae6d8721a35e9ed98d7e57383e590934a578cdf72e895d5c3752eafdf631ccbad2d960e4451d6776d21f129c9dc9b1904551edd2fbddb674b499fbb10ad9b7c2be8b5707220a8e3a36ff6dc11d6393afcb4ec0479f65bfdfe3f05f1e98614574ec36a7a5b1f18d3d976b5a82490900080d9dc274574e30a139682f22347113aa3bf2204f8e10ebd4d09bcd8cc2535f9d71130c0f21b66e133940d3a6b1eb74addd0a291481b190ade053f089c800fedcad5659fc281dc0cf5e08c0543324a352bbf3251043c373b8404ffc6b6b77bd5f2224ebfb15";
	int tab[4];

	// vftdd_putendl("1????");
	printf("%d\n", strlen(prime));
	//if (!(lst->map = malloc(sizeof(char) * strlen(prime) + 1)))
	//	return ;
	ft_putendl("1????");

	lst->map = ft_strdup(prime);
	ft_putendl("????");
	tab[0] = (i & (possibility) ? 1: 0);
	tab[1] = (i & (possibility >> 1) ? 1 :0);
	tab[2] = (i & (possibility >> 2) ? 1 : 0);
	tab[3] = (i & (possibility >> 3) ? 1 : 0);

	i = 0;
	while (i <= possibility)
	{
		while (tab[i++] == 0);
		if (lst->pos[i] != -1)
		{
			pos = lst->pos[i];
			lst->map[pos] = lst->l[0];
			lst->map[pos + 1] = lst->l[1];
		}
		i++;
	}
	ft_putendl("HALO");
	ft_putendl(lst->map);
}
