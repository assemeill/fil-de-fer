/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scene.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aszhilki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 19:57:46 by aszhilki          #+#    #+#             */
/*   Updated: 2019/12/15 17:56:01 by aszhilki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_panel(t_coord *t)
{
	int i;

	i = 9;
	while (i++ < 300)
	{
		mlx_pixel_put(t->mlx_ptr, t->win_ptr, i, 10, 0xFFFFFF);
		mlx_pixel_put(t->mlx_ptr, t->win_ptr, i, 200, 0xFFFFFF);
	}
	i = 10;
	while (i++ < 200)
	{
		mlx_pixel_put(t->mlx_ptr, t->win_ptr, 10, i, 0xFFFFFF);
		mlx_pixel_put(t->mlx_ptr, t->win_ptr, 300, i, 0xFFFFFF);
	}
	i = 109;
	while (i++ < 190)
		mlx_pixel_put(t->mlx_ptr, t->win_ptr, i, 50, 0xFFFFFF);
	mlx_string_put(t->mlx_ptr, t->win_ptr, 110, 30, 0xFFFFFF, "CONTROLS");
	mlx_string_put(t->mlx_ptr, t->win_ptr, 110, 70, 0xFFFFFF, "+/- zoom");
	mlx_string_put(t->mlx_ptr, t->win_ptr, 110, 90, 0xFFFFFF, "ESC exit");
	mlx_string_put(t->mlx_ptr, t->win_ptr, 95, 110, 0xFFFFFF, "ARROWS move");
	mlx_string_put(t->mlx_ptr, t->win_ptr, 70, 130,
	0xFFFFFF, "SPACE change view");
	mlx_string_put(t->mlx_ptr, t->win_ptr, 75, 150,
	0xFFFFFF, "TAB change color");
}
