/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:42:13 by ajung             #+#    #+#             */
/*   Updated: 2021/11/24 16:52:07 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((('a' <= c) && (c <= 'z')) || (('A' <= c) && (c <= 'Z')))
		return (1);
	else
		return (0);
}
