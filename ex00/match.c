/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/07 18:19:44 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/07 22:24:43 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			match(char *str, char *pat)
{
	if (*str == '\0' && *pat == '\0')
		return (1);
	if (*str == '\0' && *pat == '*')
		return (match(str, pat + 1));
	if (*str == *pat)
		return (match(str + 1, pat + 1));
	if (*pat == '*')
		return (match(str + 1, pat) || match(str, pat + 1));
	return (0);
}
