/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:10:20 by rmonnier          #+#    #+#             */
/*   Updated: 2016/11/03 19:31:30 by rmonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	if (s1[0] == s2[0])
		return (s1[0] != '\0' ? ft_strcmp(s1 + 1, s2 + 1) : 0);
	else
		return ((unsigned char)s1[0] - (unsigned char)s2[0]);
}