/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jokaruk- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 11:45:01 by jokaruk-          #+#    #+#             */
/*   Updated: 2019/08/03 12:02:20 by jokaruk-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_draw_cube(int width, int height, char *skin);

void	rush(int width, int height)
{
	char skin[6];

	skin[0] = 'o';
	skin[1] = 'o';
	skin[2] = 'o';
	skin[3] = 'o';
	skin[4] = '-';
	skin[5] = '|';
	ft_draw_cube(width, height, skin);
}
