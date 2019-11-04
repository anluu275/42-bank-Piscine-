/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 17:00:55 by anluu             #+#    #+#             */
/*   Updated: 2019/10/30 17:26:19 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (*s1 && *s2)
	{
		if (*s1 - *s2 != 0)
		{
			i = *s1 - *s2;
			break ;
		}
		s1++;
		s2++;
	}
	return (i);
}