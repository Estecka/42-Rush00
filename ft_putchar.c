/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 09:46:56 by abaur             #+#    #+#             */
/*   Updated: 2019/08/03 11:20:36 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define NW 0
#define NE 1
#define SW 2
#define SE 3
#define BORDER 4
#define BODY ' '

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_draw_first_line_at(int x, int width, char *skin)
{
	if(x == 0)
		ft_putchar(skin[NW]);
	else if (x == (width - 1))
		ft_putchar(skin[NE]);
	else
		ft_putchar(skin[BORDER]);
}

void	ft_draw_mid_line_at(int x, int width, char *skin)
{
	if(x == 0 || x == (width - 1))
		ft_putchar(skin[BORDER]);
	else
		ft_putchar(BODY);
}

void	ft_draw_last_line_at(int x, int width, char *skin)
{
	if(x == 0)
		ft_putchar(skin[SW]);
	else if (x == (width - 1))
		ft_putchar(skin[SE]);
	else
		ft_putchar(skin[BORDER]);
}

void	ft_draw_cube(int width, int height, char *skin)
{
	int x;
	int y;

	y = 0;
	while (y < height)
	{
		x = 0;
		while (x < width)
		{
			if (y == 0)
				ft_draw_first_line_at(x, width, skin);
			else if (y == (height - 1))
				ft_draw_last_line_at(x, width, skin);
			else
				ft_draw_mid_line_at(x, width, skin);\
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}
