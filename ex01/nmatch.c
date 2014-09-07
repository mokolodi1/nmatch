/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/07 22:25:55 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/07 22:45:43 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			nmatch(char *str, char *pat)
{
	if (*str == '\0' && *pat == '\0')
		return (1);
	if (*str == '\0' && *pat == '*')
		return (nmatch(str, pat + 1));
	if (*str == *pat)
		return (nmatch(str + 1, pat + 1));
	if (*pat == '*')
		return (nmatch(str + 1, pat) + nmatch(str, pat + 1));
	return (0);
}
