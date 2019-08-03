/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 09:43:32 by abaur             #+#    #+#             */
/*   Updated: 2019/08/03 12:46:57 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_draw_cube(int width, int height, char *skin);

void	rush(int width, int height)
{
	char skin[6];

	skin[0] = 'A';
	skin[1] = 'C';
	skin[2] = 'C';
	skin[3] = 'A';
	skin[4] = 'B';
	skin[5] = 'B';
	ft_draw_cube(width, height, skin);
}
